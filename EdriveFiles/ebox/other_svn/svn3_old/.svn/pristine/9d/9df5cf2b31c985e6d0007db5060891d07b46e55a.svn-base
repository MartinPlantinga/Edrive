#include <gtk/gtk.h>
#include <gtk_graph.h>

/* GtkGraph widget prototypes */
static void		gtk_graph_class_init(GtkGraphClass *klass);
static void 	gtk_graph_destroy(GtkObject *object);
GtkType 		gtk_graph_get_type(void);
static void		gtk_graph_init(GtkGraph *graph);
GtkWidget *		gtk_graph_new(void);

/* Signal handlers prototypes */
static gint		on_gtk_graph_button_press_event(GtkWidget *widget, GdkEventButton *event);
static gint		on_gtk_graph_button_release_event(GtkWidget *widget, GdkEventButton *event);
static gint		on_gtk_graph_configure_event(GtkWidget *widget, GdkEventConfigure *event);
static gint		on_gtk_graph_expose_event(GtkWidget *widget, GdkEventExpose *event);
static gint		on_gtk_graph_motion_notify_event(GtkWidget *widget, GdkEventMotion *event);
static void		on_gtk_graph_realize(GtkWidget *widget);
static void		on_gtk_graph_size_request(GtkWidget *widget, GtkRequisition *requisition);
static void		on_gtk_graph_size_allocate(GtkWidget *widget, GtkAllocation *allocation);

/* User defined function prototypes */
static gdouble gtk_graph_nicenumber(gdouble value);
static ticks_t *gtk_graph_create_ticks(gdouble *range);
static gint gtk_graph_destroy_ticks(ticks_t *ticks);
#ifdef LATEX
static gint gtk_graph_latexstring2png(gchar* latexstring);
#endif
static gint gtk_graph_create_axis_surface(GtkWidget *widget);
static gint gtk_graph_create_label_surface(GtkWidget *widget);
static gint gtk_graph_create_grid_surface_log(GtkWidget *widget);
static gint gtk_graph_create_grid_surface_linear(GtkWidget *widget);
static gint gtk_graph_create_grid_surface(GtkWidget *widget);
static gint gtk_graph_create_data_surface_log(GtkWidget *widget);
static gint gtk_graph_create_data_surface_linear(GtkWidget *widget);
static gint gtk_graph_create_data_surface(GtkWidget *widget);
static gint gtk_graph_create_total_surface(GtkWidget *widget);
static gint gtk_graph_draw_zoom(GtkWidget *widget, cairo_t *cr, gint width, gint height);
static gint gtk_graph_draw_point(GtkWidget *widget, cairo_t *cr, gint width, gint height);

/* GtkGraph widget functions */

static void gtk_graph_class_init(GtkGraphClass *klass)
{
#ifdef DEBUG
	printf("gtk_graph_class_init called\n");
#endif
	GtkObjectClass *object_class;
	GtkWidgetClass *widget_class;	

	object_class = (GtkObjectClass *) klass;
	widget_class = (GtkWidgetClass *) klass;

	/* overwrite default signal handlers */
	widget_class->button_press_event = on_gtk_graph_button_press_event;
	widget_class->button_release_event = on_gtk_graph_button_release_event;
	widget_class->configure_event = on_gtk_graph_configure_event;
	widget_class->expose_event = on_gtk_graph_expose_event;
	widget_class->motion_notify_event = on_gtk_graph_motion_notify_event;
	widget_class->realize = on_gtk_graph_realize;
	widget_class->size_request = on_gtk_graph_size_request;
	widget_class->size_allocate = on_gtk_graph_size_allocate;

	object_class->destroy = gtk_graph_destroy;
}

static void gtk_graph_destroy(GtkObject *object)
{
#ifdef DEBUG
	printf("gtk_graph_destroy called\n");
#endif
	GtkGraph *graph;
	GtkGraphClass *klass;

	g_return_if_fail(object != NULL);
	g_return_if_fail(GTK_IS_GRAPH(object));

	graph = GTK_GRAPH(object);

	klass = gtk_type_class(gtk_widget_get_type());

	if (GTK_OBJECT_CLASS(klass)->destroy) {
		(* GTK_OBJECT_CLASS(klass)->destroy) (object);
	}
}


GtkType gtk_graph_get_type(void)
{
#ifdef DEBUG
//	printf("gtk_graph_get_type called\n");
#endif

/* see also http://www.gtk.org/api/2.6/gtk/gtk-changes-1-2.html */
	static GtkType gtk_graph_type = 0;
	
	if (!gtk_graph_type) {
		static const GtkTypeInfo gtk_graph_info = {
			"GtkGraph",
			sizeof(GtkGraph),
			sizeof(GtkGraphClass),
			(GtkClassInitFunc) gtk_graph_class_init,
			(GtkObjectInitFunc) gtk_graph_init,
			NULL,
			NULL,
			(GtkClassInitFunc) NULL
		};
		gtk_graph_type = gtk_type_unique(GTK_TYPE_WIDGET, &gtk_graph_info);
	}

	return gtk_graph_type;
}

static void gtk_graph_init(GtkGraph *graph)
{	
#ifdef DEBUG
	printf("gtk_graph_init called\n");
#endif
	/* default values */
	graph->xrange[0] = 0;
	graph->xrange[1] = 0;
	graph->yrange[0] = 0;
	graph->yrange[1] = 0;
	graph->ndata = 0;
	graph->xtype = LINEAR;
	graph->ytype = LINEAR;
}

GtkWidget *gtk_graph_new(void)
{
#ifdef DEBUG
	printf("gtk_graph_new called\n");
#endif
	return GTK_WIDGET(gtk_type_new(gtk_graph_get_type()));
}

/* Signal handlers functions */

static gint on_gtk_graph_button_press_event(GtkWidget *widget, GdkEventButton *event)
{
#ifdef DEBUG
	printf("on_gtk_graph_button_press_event called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	gint i, width, height;

	/* set tool_state */
	if(graph->tool==ZOOM) {
	
		/* determine size of drawing area */
		width = gdk_window_get_width(gtk_widget_get_window(widget)); 
		height = gdk_window_get_height(gtk_widget_get_window(widget));

		/* get mouse pointer in data units */
		graph->xrangezoom[0] = 1.0*(graph->mouse[0]-DIST_AXIS2FIGURE_X)/(width-2*DIST_AXIS2FIGURE_X)*(graph->xrange[1]-graph->xrange[0])+graph->xrange[0];
		graph->yrangezoom[0] = 1.0*(height-DIST_AXIS2FIGURE_Y-graph->mouse[1])/(height-2*DIST_AXIS2FIGURE_Y)*(graph->yrange[1]-graph->yrange[0])+graph->yrange[0];

		/* set tool state to ZOOM_BUSY */
		graph->tool_state = ZOOM_BUSY;
	}

	/* detect double click */
	if ( event->type==GDK_2BUTTON_PRESS) {

		gtk_graph_create_axis_surface(widget);
		gtk_graph_create_label_surface(widget);

		/* determine x range */
		graph->xrange[0] = INFINITY;
		graph->xrange[1] = -INFINITY;
		for(i=0;i<graph->ndata;i++) {
			if (graph->xdata[i] < graph->xrange[0]) {
				graph->xrange[0] = graph->xdata[i];
			}
			if (graph->xdata[i] > graph->xrange[1]) {
				graph->xrange[1] = graph->xdata[i];
			}
		}

		/* determine y range */
		graph->yrange[0] = INFINITY;
		graph->yrange[1] = -INFINITY;
		for(i=0;i<graph->ndata;i++) {
			if (graph->ydata[i] < graph->yrange[0]) {
				graph->yrange[0] = graph->ydata[i];
			}
			if (graph->ydata[i] > graph->yrange[1]) {
				graph->yrange[1] = graph->ydata[i];
			}
		}

		gtk_graph_create_grid_surface(widget);
		gtk_graph_create_data_surface(widget);	

		gtk_graph_create_total_surface(widget);

		/* set tool state to ZOOM_READY */
		graph->tool_state = ZOOM_READY;

		/* trigger expose event */	
		gtk_widget_queue_draw(widget);
  	}

	/* detect triple click */
	if(event->type==GDK_3BUTTON_PRESS) {

		cairo_t *cr;
		cairo_surface_t *image;

		gint width, height;

		/* determine size of drawing area */
		width = gdk_window_get_width(gtk_widget_get_window(widget)); 
		height = gdk_window_get_height(gtk_widget_get_window(widget));

		/* create image surface */
		image = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
		cr = cairo_create(image);
	
		/* plot white background */
		cairo_set_source_rgba(cr,1,1,1,1.0); /* opague, do copy */
		cairo_paint(cr);

		/* set source surface to created total surface (see on_realize callback function) */
		cairo_set_source_surface (cr, graph->total_surface, 0, 0);
		cairo_paint(cr);

		/* save image */
		cairo_surface_write_to_png(image, "/home/jbest/Desktop/image.png");

		/* destroy cr */
		cairo_destroy(cr);

		/* destroy the image surface */
		cairo_surface_destroy(image);
	}

	return 0;
}

static gint on_gtk_graph_button_release_event(GtkWidget *widget, GdkEventButton *event)
{
#ifdef DEBUG
	printf("on_gtk_graph_button_press_release called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	gint width, height;

	if(graph->tool==ZOOM && graph->tool_state==ZOOM_BUSY) {
		
		/* determine size of drawing area */
		width = gdk_window_get_width(gtk_widget_get_window(widget)); 
		height = gdk_window_get_height(gtk_widget_get_window(widget));

		/* get mouse pointer in data units */
		graph->xrangezoom[1] = 1.0*(graph->mouse[0]-DIST_AXIS2FIGURE_X)/(width-2*DIST_AXIS2FIGURE_X)*(graph->xrange[1]-graph->xrange[0])+graph->xrange[0];
		graph->yrangezoom[1] = 1.0*(height-DIST_AXIS2FIGURE_Y-graph->mouse[1])/(height-2*DIST_AXIS2FIGURE_Y)*(graph->yrange[1]-graph->yrange[0])+graph->yrange[0];

		/* set tool state to ZOOM_READY */
		graph->tool_state = ZOOM_READY;

		/* new xrange */
		if(graph->xrangezoom[0]<graph->xrangezoom[1]) {
			graph->xrange[0]=graph->xrangezoom[0];
			graph->xrange[1]=graph->xrangezoom[1];
		} else {
			graph->xrange[1]=graph->xrangezoom[0];
			graph->xrange[0]=graph->xrangezoom[1];
		}

		/* new yrange */
		if(graph->yrangezoom[0]<graph->yrangezoom[1]) {
			graph->yrange[0]=graph->yrangezoom[0];
			graph->yrange[1]=graph->yrangezoom[1];
		} else {
			graph->yrange[1]=graph->yrangezoom[0];
			graph->yrange[0]=graph->yrangezoom[1];
		}	
	
		if(graph->xrangezoom[0]==graph->xrangezoom[1] || graph->yrangezoom[0]==graph->yrangezoom[1]) {
			gint i;
			/* determine x range */
			graph->xrange[0] = INFINITY;
			graph->xrange[1] = -INFINITY;
			for(i=0;i<graph->ndata;i++) {
				if (graph->xdata[i] < graph->xrange[0]) {
					graph->xrange[0] = graph->xdata[i];
				}
				if (graph->xdata[i] > graph->xrange[1]) {
					graph->xrange[1] = graph->xdata[i];
				}
			}

			/* determine y range */
			graph->yrange[0] = INFINITY;
			graph->yrange[1] = -INFINITY;
			for(i=0;i<graph->ndata;i++) {
				if (graph->ydata[i] < graph->yrange[0]) {
					graph->yrange[0] = graph->ydata[i];
				}
				if (graph->ydata[i] > graph->yrange[1]) {
					graph->yrange[1] = graph->ydata[i];
				}
			}
		}	

//		gtk_graph_create_axis_surface(widget);
//		gtk_graph_create_label_surface(widget);		
		gtk_graph_create_grid_surface(widget);
		gtk_graph_create_data_surface(widget);	

		gtk_graph_create_total_surface(widget);

		/* trigger expose event */	
		gtk_widget_queue_draw(widget);

	}

	return 0;
}

static gint on_gtk_graph_configure_event(GtkWidget *widget, GdkEventConfigure *event)
{
#ifdef DEBUG
	printf("on_gtk_graph_configure_event called\n");
#endif

	return 0;
}

static gint on_gtk_graph_expose_event(GtkWidget *widget, GdkEventExpose *event)
{
#ifdef DEBUG
	printf("on_gtk_graph_expose_event called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	cairo_t *cr;
	gint width, height;

	/* start timer */
	gtk_graph_start_timer(widget);

	/* create cairo drawing */
	cr = gdk_cairo_create (widget->window);

	/* determine size of drawing area */
	width = gdk_window_get_width(gtk_widget_get_window(widget)); 
	height = gdk_window_get_height(gtk_widget_get_window(widget));

	/* set source surface to created total surface (see on_realize callback function) */
	cairo_set_source_surface (cr, graph->total_surface, 0, 0);
	cairo_paint(cr);

	switch(graph->tool) {
		case ZOOM:
			gtk_graph_draw_zoom(widget,cr,width,height);
			break;
		case POINT:
			gtk_graph_draw_point(widget,cr,width,height);
			break;
		default:
			break;
	}

	cairo_destroy(cr);

	/* stop timer */
	gtk_graph_stop_timer(widget);

	return 0;
}

static gint on_gtk_graph_motion_notify_event(GtkWidget *widget, GdkEventMotion *event)
{
#ifdef DEBUG
	printf("on_gtk_graph_motion_notify_event called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);

	/* store mouse position */
	graph->mouse[0] = event->x;
	graph->mouse[1] = event->y;
	
	/* trigger expose event */	
	gtk_widget_queue_draw(widget);

	return 0;
}

static void on_gtk_graph_realize(GtkWidget *widget)
{
#ifdef DEBUG
	printf("on_gtk_graph_realize called\n");
#endif

	GdkWindowAttr attributes;
	guint attributes_mask;

	gtk_widget_set_realized(widget, TRUE);

	attributes.window_type = GDK_WINDOW_CHILD;
	attributes.x = widget->allocation.x;
	attributes.y = widget->allocation.y;

	attributes.width = widget->allocation.width;
	attributes.height = widget->allocation.height;

	attributes.wclass = GDK_INPUT_OUTPUT;
	attributes.event_mask = gtk_widget_get_events(widget) | GDK_EXPOSURE_MASK | GDK_POINTER_MOTION_MASK | GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK;

	attributes_mask = GDK_WA_X | GDK_WA_Y;

	widget->window = gdk_window_new(gtk_widget_get_parent_window (widget), &attributes, attributes_mask);

	gdk_window_set_user_data(widget->window, widget);

	widget->style = gtk_style_attach(widget->style, widget->window);
	gtk_style_set_background(widget->style, widget->window, GTK_STATE_NORMAL);


	gtk_graph_create_axis_surface(widget);

	gtk_graph_create_total_surface(widget);

}

static void on_gtk_graph_size_request(GtkWidget *widget, GtkRequisition *requisition)
{
#ifdef DEBUG
	printf("on_gtk_graph_size_request called\n");
#endif

	requisition->width = DEFAULTWIDTH;
	requisition->height = DEFAULTHEIGHT;

}

static void on_gtk_graph_size_allocate(GtkWidget *widget, GtkAllocation *allocation)
{
#ifdef DEBUG
	printf("on_gtk_graph_size_allocate called\n");
#endif
 
	widget->allocation = *allocation;

	if (gtk_widget_get_realized(widget)) {
		gdk_window_move_resize(widget->window, allocation->x, allocation->y, allocation->width, allocation->height);
	}

	if(gtk_widget_get_realized(widget)) {
		gtk_graph_create_axis_surface(widget);
		gtk_graph_create_label_surface(widget);		
		gtk_graph_create_grid_surface(widget);
		gtk_graph_create_data_surface(widget);	

		gtk_graph_create_total_surface(widget);
	}

}

/* User defined functions */
gint gtk_graph_start_timer(GtkWidget* widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_start_timer called\n");
#endif
	GtkGraph *graph = GTK_GRAPH(widget);

	struct timeval t;	
	gettimeofday(&t,NULL);
	graph->tstart = t.tv_sec+t.tv_usec/1000000.0;
	
	return 0;
}

gint gtk_graph_stop_timer(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_stop_timer called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);

	struct timeval t;	
	gettimeofday(&t,NULL);
	graph->tstop = t.tv_sec+t.tv_usec/1000000.0;
	
	return 0;
}

static gdouble gtk_graph_nicenumber(gdouble value)
{
#ifdef DEBUG
	printf("\tgtk_graph_nicenumber called\n");
#endif

	gint exponent;
	gdouble fraction;
	gdouble nicefraction;

	exponent = (gint) floor(log10(value));
	fraction = value/pow(10, (gdouble)exponent);

    if (fraction <= 1.0) {
      nicefraction = 1.0;
    } else if (fraction <= 2.0) {
      nicefraction = 2.0;
    } else if (fraction <= 5.0) {
      nicefraction = 5.0;
    } else {
      nicefraction = 10.0;
 	}

	return nicefraction*pow(10, (gdouble)exponent);
}

static ticks_t *gtk_graph_create_ticks(gdouble *range)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_ticks called\n");
#endif

	gint i, exp0, exp1;

	/* allocate memory for ticks structure */
	ticks_t *ticks = (ticks_t *)malloc(sizeof(ticks_t));

	/* check for special case if range is just one value */
	if(range[1] - range[0] <1e-10) {
		if(range[0]!=0) {
			range[0] = range[0]-0.01*range[0];
			range[1] = range[1]+0.01*range[1];
		} else {
			range[0] = -1;
			range[1] = 1;
		}
	}

	/* calculate tick step: try to divide the range in roughly 10 steps */
	ticks->tick_step = gtk_graph_nicenumber((range[1]-range[0])/10.0);

	/* adapt range */
	range[0] = floor(range[0]/ticks->tick_step)*ticks->tick_step;
	range[1] = ceil(range[1]/ticks->tick_step)*ticks->tick_step;
	
	/* calculate number of ticks */
	ticks->tick_n = (gint)round((range[1]-range[0])/ticks->tick_step+1);

	/* allocate memory for tick labels */
	ticks->tick_labels = (gdouble *)malloc(ticks->tick_n*sizeof(gdouble));

	/* calculate ticks */
	for(i=0;i<ticks->tick_n;i++)
	{	
		ticks->tick_labels[i] = range[0]+i*ticks->tick_step;
	}

	/* determine exponent */
	if(range[0]) {
		exp0 = (gint) floor(log10(fabs(range[0])));
	} else {
		exp0 = 0;
	}
	if(range[1]) {
		exp1 = (gint) floor(log10(fabs(range[1])));
	} else {
		exp1 = 0;
	}
	if(exp0 && exp1) {
		ticks->tick_exponent = max(exp0,exp1);
	} else if(exp0 && !exp1) {
		ticks->tick_exponent = exp0;
	} else if(exp1 && !exp0) {
		ticks->tick_exponent = exp1;
	} else {
		ticks->tick_exponent = 0;
	}

	if(fabs(ticks->tick_exponent)<3) {
		ticks->tick_exponent = 0;
	}

	/* determine step significance for rounding of tick labels */
	if((gint)floor(log10(ticks->tick_step))-ticks->tick_exponent<0) {
		ticks->tick_step_significance = -((gint)floor(log10(ticks->tick_step))-ticks->tick_exponent);
	} else {
		ticks->tick_step_significance = 0;
	}

	return ticks;
	
}

static gint gtk_graph_destroy_ticks(ticks_t *ticks)
{
#ifdef DEBUG
	printf("\tgtk_graph_destroy_ticks called\n");
#endif

	free(ticks->tick_labels);
	free(ticks);

	return 0;
}

#ifdef LATEX
static gint gtk_graph_latexstring2png(gchar* latexstring)
{
#ifdef DEBUG
	printf("\tgtk_graph_latexstring2png called\n");
#endif

	FILE* fp;

	fp = fopen("temp.tex","w");
	fprintf(fp,"\\documentclass{article}\n");
	fprintf(fp,"\\pagestyle{empty}\n");
	fprintf(fp,"\\usepackage{amsmath}\n");
	fprintf(fp,"\\usepackage{amssymb}\n");
	fprintf(fp,"\\usepackage{amsfonts}\n");
	fprintf(fp,"\\begin{document}\n");
	fprintf(fp,"\\textbf{%s}\n",latexstring);
	fprintf(fp,"\\end{document}\n");
	fclose(fp);

	system("latex temp.tex > /dev/null");
	system("dvipng -T tight -z 9 --gamma 4 -q* -x 1200 -D 95 -bg Transparent -o temp.png temp.dvi > /dev/null");
	system("rm -f temp.aux");
	system("rm -f temp.dvi");
	system("rm -f temp.log");
	system("rm -f temp.aux");
	system("rm -f temp.tex");

	return 0;
}
#endif

static gint gtk_graph_create_axis_surface(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_axis_surface called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	cairo_t *cr;
	gint width, height;

	/* determine size of drawing area */
	width = gdk_window_get_width(gtk_widget_get_window(widget)); 
	height = gdk_window_get_height(gtk_widget_get_window(widget));

	/* create the axis surface, which will be used lateron in the on_expose_event callback function */
	if(graph->axis_surface) {
		cairo_surface_destroy(graph->axis_surface);
		graph->axis_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	} else {
		graph->axis_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	}
	cr = cairo_create(graph->axis_surface);

	/* plot background */
	cairo_set_source_rgba(cr,0,0,0,0.0); /* translucent, do not copy */
	cairo_paint(cr);
	/* plot axis box */
	cairo_set_source_rgba(cr,1,1,1,1.0); /* opacity, do copy */
	cairo_rectangle(cr,DIST_AXIS2FIGURE_X,DIST_AXIS2FIGURE_Y,width-2*DIST_AXIS2FIGURE_X,height-2*DIST_AXIS2FIGURE_Y);
	cairo_fill_preserve(cr);
	cairo_set_source_rgba(cr,0,0,0,1.0); /* opacity, do copy */
	cairo_stroke(cr);

	cairo_destroy(cr);

	return 0;
}

static gint gtk_graph_create_label_surface(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_label_surface called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	cairo_t *cr;
	gchar emptystring[2] = " ";
	gint width, height;

	/* determine size of drawing area */
	width = gdk_window_get_width(gtk_widget_get_window(widget)); 
	height = gdk_window_get_height(gtk_widget_get_window(widget));

	if(graph->label_surface) {
		cairo_surface_destroy(graph->label_surface);
		graph->label_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	} else {
		graph->label_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	}
	cr = cairo_create(graph->label_surface);
	
#ifdef LATEX /* LaTeX code for label */

	cairo_surface_t *surface;

	/* title */
	if(!graph->title) {
		gtk_graph_latexstring2png(emptystring);	
	} else {
		gtk_graph_latexstring2png(graph->title);
	}
	surface = cairo_image_surface_create_from_png("temp.png");
	
	cairo_set_source_surface(cr,surface,width/2.0-cairo_image_surface_get_width(surface)/2.0,DIST_AXIS2FIGURE_Y-DIST_TITLE2AXIS_Y-cairo_image_surface_get_height(surface));
	cairo_mask_surface(cr,surface,width/2.0-cairo_image_surface_get_width(surface)/2.0,DIST_AXIS2FIGURE_Y-DIST_TITLE2AXIS_Y-cairo_image_surface_get_height(surface));
	cairo_fill(cr);
#ifdef PLOTEXTENTS
	/* plot title extents */
	cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
	cairo_move_to(cr, width/2.0-cairo_image_surface_get_width(surface)/2.0,DIST_AXIS2FIGURE_Y-DIST_TITLE2AXIS_Y);
	cairo_rel_line_to (cr,cairo_image_surface_get_width(surface),0);
	cairo_rel_line_to (cr,0,-cairo_image_surface_get_height(surface));
	cairo_rel_line_to (cr,-cairo_image_surface_get_width(surface),0);
	cairo_rel_line_to (cr,0,cairo_image_surface_get_height(surface));
	cairo_stroke(cr);
	cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif	
	cairo_surface_destroy(surface);
	
	/* xlabel */
	if(!graph->xlabel) {
		gtk_graph_latexstring2png(emptystring);	
	} else {
		gtk_graph_latexstring2png(graph->xlabel);
	}
	surface = cairo_image_surface_create_from_png("temp.png");
	
	cairo_set_source_surface(cr,surface,width/2.0-cairo_image_surface_get_width(surface)/2.0,height-DIST_AXIS2FIGURE_Y+DIST_XLABEL2AXIS_Y);
	cairo_mask_surface(cr,surface,width/2.0-cairo_image_surface_get_width(surface)/2.0,height-DIST_AXIS2FIGURE_Y+DIST_XLABEL2AXIS_Y);
	cairo_fill(cr);
#ifdef PLOTEXTENTS
	/* plot xlabel extents */
	cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
	cairo_move_to(cr, width/2.0-cairo_image_surface_get_width(surface)/2.0,height-DIST_AXIS2FIGURE_Y+DIST_XLABEL2AXIS_Y+cairo_image_surface_get_height(surface));
	cairo_rel_line_to (cr,cairo_image_surface_get_width(surface),0);
	cairo_rel_line_to (cr,0,-cairo_image_surface_get_height(surface));
	cairo_rel_line_to (cr,-cairo_image_surface_get_width(surface),0);
	cairo_rel_line_to (cr,0,cairo_image_surface_get_height(surface));
	cairo_stroke(cr);
	cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif	
	cairo_surface_destroy(surface);

	/* ylabel */
	if(!graph->ylabel) {
		gtk_graph_latexstring2png(emptystring);	
	} else {
		gtk_graph_latexstring2png(graph->ylabel);
	}
	surface = cairo_image_surface_create_from_png("temp.png");
	
	cairo_rotate(cr,-M_PI/2.0);
	cairo_set_source_surface(cr,surface,-height/2.0-cairo_image_surface_get_width(surface)/2.0,DIST_AXIS2FIGURE_X-cairo_image_surface_get_height(surface)-DIST_YLABEL2AXIS_X);
	cairo_mask_surface(cr,surface,-height/2.0-cairo_image_surface_get_width(surface)/2.0,DIST_AXIS2FIGURE_X-cairo_image_surface_get_height(surface)-DIST_YLABEL2AXIS_X);
	cairo_fill(cr);
	cairo_rotate(cr,M_PI/2.0);
#ifdef PLOTEXTENTS
	/* plot xlabel extents */
	cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
	cairo_move_to(cr, DIST_AXIS2FIGURE_X-DIST_YLABEL2AXIS_X,height/2.0-cairo_image_surface_get_width(surface)/2.0);
	cairo_rel_line_to (cr,0,cairo_image_surface_get_width(surface));
	cairo_rel_line_to (cr,-cairo_image_surface_get_height(surface),0);
	cairo_rel_line_to (cr,0,-cairo_image_surface_get_width(surface));
	cairo_rel_line_to (cr,cairo_image_surface_get_height(surface),0);
	cairo_stroke(cr);
	cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif	
	cairo_surface_destroy(surface);

	cairo_destroy(cr);

	return 0;

#else /* no LaTeX code for label */

	cairo_text_extents_t extents;

	/* plot background */
	cairo_set_source_rgba(cr,0,0,0,0.0); /* translucent, do not copy */
	cairo_paint(cr);

	/* set font */
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, FONTSIZE);
	cairo_set_source_rgba(cr,0,0,0,1.0); /* opaque, do copy */
	
	/* plot xlabel */
	cairo_text_extents(cr, graph->xlabel, &extents);
	cairo_move_to(cr, 0.5*width-0.5*(extents.width),height-DIST_AXIS2FIGURE_Y+DIST_XLABEL2AXIS_Y+extents.height);
	cairo_rotate(cr,0.0);
	cairo_show_text (cr, graph->xlabel);
	cairo_rotate(cr,0.0);
	cairo_stroke(cr);

#ifdef PLOTEXTENTS
	/* plot xlabel extents */
	cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
	cairo_move_to(cr, 0.5*width-0.5*(extents.width),height-DIST_AXIS2FIGURE_Y+DIST_XLABEL2AXIS_Y+extents.height);
	cairo_rel_line_to (cr,extents.width,0);
	cairo_rel_line_to (cr,0,-extents.height);
	cairo_rel_line_to (cr,-extents.width,0);
	cairo_rel_line_to (cr,0,extents.height);
	cairo_stroke(cr);
	cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif

	/* plot ylabel */
	cairo_text_extents(cr, graph->ylabel, &extents);
	cairo_move_to (cr, DIST_AXIS2FIGURE_X-DIST_YLABEL2AXIS_X,0.5*height+0.5*extents.width);
	cairo_rotate(cr,-M_PI/2.0);
	cairo_show_text (cr, graph->ylabel);
	cairo_rotate(cr,M_PI/2.0);

#ifdef PLOTEXTENTS
	/* plot ylabel extents */
	cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
	cairo_move_to (cr, DIST_AXIS2FIGURE_X-DIST_YLABEL2AXIS_X,0.5*height+0.5*extents.width);
	cairo_rel_line_to (cr,0,-extents.width);
	cairo_rel_line_to (cr,-extents.height,0);
	cairo_rel_line_to (cr,0,extents.width);
	cairo_rel_line_to (cr,extents.height,0);
	cairo_stroke(cr);
	cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif

	/* plot title */
	cairo_text_extents(cr, graph->title, &extents);
	cairo_move_to (cr, 0.5*width-0.5*(extents.width),DIST_AXIS2FIGURE_Y-DIST_TITLE2AXIS_Y);
	cairo_rotate(cr,0.0);
	cairo_show_text (cr, graph->title);
	cairo_rotate(cr,0.0);

#ifdef PLOTEXTENTS
	/* plot title extents */
	cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
	cairo_move_to (cr, 0.5*width-0.5*(extents.width),DIST_AXIS2FIGURE_Y-DIST_TITLE2AXIS_Y);
	cairo_rel_line_to (cr,extents.width,0);
	cairo_rel_line_to (cr,0,-extents.height);
	cairo_rel_line_to (cr,-extents.width,0);
	cairo_rel_line_to (cr,0,extents.height);
	cairo_stroke(cr);
	cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif

	cairo_destroy(cr);

	return 0;

#endif

}

static gint gtk_graph_create_grid_surface_log(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_grid_surface_log called\n");
#endif
	
	GtkGraph *graph = GTK_GRAPH(widget);
	cairo_t *cr;
	gint kmin, kmax, k, i, width, height;
	gchar tick[100];
	gchar str[100];
	cairo_text_extents_t extents;

	/* determine size of drawing area */
	width = gdk_window_get_width(gtk_widget_get_window(widget)); 
	height = gdk_window_get_height(gtk_widget_get_window(widget));

	/* create the grid surface, which will be used lateron in the on_expose_event callback function */
	if(graph->grid_surface) {
		cairo_surface_destroy(graph->grid_surface);
		graph->grid_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	} else {
		graph->grid_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	}
	cr = cairo_create(graph->grid_surface);

	/* plot background */
	cairo_set_source_rgba(cr, 0, 0, 0, 0.0); /* translucent, do not copy */
	cairo_paint(cr);

	/* set line color to gray */
	cairo_set_source_rgba(cr, 0.5, 0.5, 0.5, 1.0); /* opaque, do copy */
	/* set line type to dashed */
	gdouble dashes[2] = {5,5};	
	cairo_set_dash (cr, dashes, 2, 0);

	/* minimum and maximum exponent */
	if(graph->xrange[0]>0) {
		kmin = floor(log10(graph->xrange[0]));
	} else {
	    kmin = 0;
	}
	
	if(graph->xrange[1]>0) {
		kmax = ceil(log10(graph->xrange[1]));
	} else {
		kmax = 1;
	}
	
	graph->xrange[0] = pow(10,kmin);
	graph->xrange[1] = pow(10,kmax);

	/* plot vertical grid lines */
	for(k=kmin;k<kmax;k++) {
		for(i=1;i<=9;i++) {
			if ( !(k==kmin && i==1) ) {
				cairo_move_to(cr,DIST_AXIS2FIGURE_X+(width-2*DIST_AXIS2FIGURE_X)/(kmax-kmin)*(log10(i*pow(10,k))-kmin),height-DIST_AXIS2FIGURE_Y);
				cairo_line_to(cr,DIST_AXIS2FIGURE_X+(width-2*DIST_AXIS2FIGURE_X)/(kmax-kmin)*(log10(i*pow(10,k))-kmin),DIST_AXIS2FIGURE_Y);
				cairo_stroke(cr);
			}
		}
	}

	/* set font */
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, FONTSIZETICKS);
	cairo_set_source_rgba(cr, 0, 0, 0, 1.0); /* opaque, do copy */

	/* plot x ticks */
	for(k=kmin;k<=kmax;k++) {
		cairo_set_font_size (cr, FONTSIZETICKS);
		cairo_text_extents(cr,"10", &extents);
		cairo_move_to(cr,DIST_AXIS2FIGURE_X+(width-2*DIST_AXIS2FIGURE_X)/(kmax-kmin)*(log10(pow(10,k))-kmin)-0.5*(extents.width),height-DIST_AXIS2FIGURE_Y+extents.height+DIST_XTICKS2AXIS_Y);
		cairo_show_text (cr, "10");

		sprintf(str,"%d",k);
		cairo_set_font_size (cr, FONTSIZETICKSEXPONENT);
		cairo_move_to(cr,DIST_AXIS2FIGURE_X+(width-2*DIST_AXIS2FIGURE_X)/(kmax-kmin)*(log10(pow(10,k))-kmin)+0.5*(extents.width),height-DIST_AXIS2FIGURE_Y+DIST_XTICKS2AXIS_Y);
		cairo_show_text (cr, str);
	}

	/* destroy ticks (if needed) to prevent memory leakage */
	if(graph->yticks) {
		gtk_graph_destroy_ticks(graph->yticks);
	}

	/* create ticks */
	graph->yticks = gtk_graph_create_ticks(graph->yrange);

	/* determine significance for rounding tick labels */
	sprintf(str,"%%.%df",graph->yticks->tick_step_significance);

	/* plot y ticks */
	for(i=0;i<graph->yticks->tick_n;i++) {
		sprintf(tick,str,graph->yticks->tick_labels[graph->yticks->tick_n-1-i]/pow(10,graph->yticks->tick_exponent));
		cairo_text_extents(cr,tick, &extents);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X-extents.width-DIST_YTICKS2AXIS_X,DIST_AXIS2FIGURE_Y+(gdouble)(height-2*DIST_AXIS2FIGURE_Y)/(graph->yticks->tick_n-1)*i+(extents.height)/2.0);
		cairo_show_text (cr, tick);
		cairo_stroke(cr);
#ifdef PLOTEXTENTS
		cairo_set_source_rgba(cr, 1.0, 0.0, 0.0, 1.0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X-extents.width-DIST_YTICKS2AXIS_X,DIST_AXIS2FIGURE_Y+(gdouble)(height-2*DIST_AXIS2FIGURE_Y)/(graph->yticks->tick_n-1)*i+(extents.height)/2.0);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgba(cr, 0.0, 0.0, 0.0, 1.0);
#endif
	}

/* y exponent */
	if(graph->yticks->tick_exponent) {
		cairo_text_extents(cr,"x10", &extents);
		cairo_set_source_rgb(cr, 0, 0, 0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X,DIST_AXIS2FIGURE_Y-DIST_YEXPONENT2AXIS_Y);
		cairo_show_text (cr, "x10");

#ifdef PLOTEXTENTS
		cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X,DIST_AXIS2FIGURE_Y-DIST_YEXPONENT2AXIS_Y);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif
		cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
		cairo_set_font_size (cr, FONTSIZETICKSEXPONENT);
		sprintf(tick,"%d",graph->yticks->tick_exponent);
		cairo_set_source_rgb(cr, 0, 0, 0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X+extents.width,DIST_AXIS2FIGURE_Y-DIST_YEXPONENT2AXIS_Y-extents.height);
		cairo_show_text (cr, tick);
#ifdef PLOTEXTENTS
		cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X+extents.width,DIST_AXIS2FIGURE_Y-DIST_YEXPONENT2AXIS_Y-extents.height);
		cairo_text_extents(cr,tick, &extents);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif
		cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);
		cairo_set_font_size (cr, FONTSIZETICKS);
	}
	
	/* set line color to gray */
	cairo_set_source_rgba(cr, 0.5, 0.5, 0.5, 1.0); /* opaque, do copy */
	/* set line type to dashed */
//	gdouble dashes[2] = {5,5};	
	//cairo_set_dash (cr, dashes, 2, 0);

	/* plot horizontal grid lines */
	for ( i = 1; i < graph->yticks->tick_n-1; i++ ) {
		cairo_move_to (cr, DIST_AXIS2FIGURE_X,(gdouble)DIST_AXIS2FIGURE_Y+(gdouble)(height-2*DIST_AXIS2FIGURE_Y)/(graph->yticks->tick_n-1)*i);
		cairo_line_to (cr, width-DIST_AXIS2FIGURE_X,(gdouble)DIST_AXIS2FIGURE_Y+(gdouble)(height-2*DIST_AXIS2FIGURE_Y)/(graph->yticks->tick_n-1)*i);
	}
	cairo_stroke(cr);

	/* destroy cairo object */
	cairo_destroy(cr);

	return 0;
}

static gint gtk_graph_create_grid_surface_linear(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_grid_surface_linear called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	gint i;
	cairo_t *cr;
	gint width, height;
	gchar tick[100];
	gchar str[100];
	cairo_text_extents_t extents;

	/* determine size of drawing area */
	width = gdk_window_get_width(gtk_widget_get_window(widget)); 
	height = gdk_window_get_height(gtk_widget_get_window(widget));

	/* create the grid surface, which will be used lateron in the on_expose_event callback function */
	if(graph->grid_surface) {
		cairo_surface_destroy(graph->grid_surface);
		graph->grid_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	} else {
		graph->grid_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	}
	cr = cairo_create(graph->grid_surface);

	/* plot background */
	cairo_set_source_rgba(cr, 0, 0, 0, 0.0); /* translucent, do not copy */
	cairo_paint(cr);	

	/* destroy ticks (if needed) to prevent memory leakage */
	if(graph->xticks) {
		gtk_graph_destroy_ticks(graph->xticks);
	}
	if(graph->yticks) {
		gtk_graph_destroy_ticks(graph->yticks);
	}

	/* create ticks */
	graph->xticks = gtk_graph_create_ticks(graph->xrange);
	graph->yticks = gtk_graph_create_ticks(graph->yrange);

	/* set font */
	cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
	cairo_set_font_size (cr, FONTSIZETICKS);
	cairo_set_source_rgba(cr, 0, 0, 0, 1.0); /* opaque, do copy */

	/* determine significance for rounding tick labels */
	sprintf(str,"%%.%df",graph->xticks->tick_step_significance);
	
	/* plot x ticks */
	for(i=0;i<graph->xticks->tick_n;i++)	{		
		sprintf(tick,str,graph->xticks->tick_labels[i]/pow(10,graph->xticks->tick_exponent));
		cairo_text_extents(cr,tick, &extents);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X+(gdouble)(width-2*DIST_AXIS2FIGURE_X)/(graph->xticks->tick_n-1)*i-0.5*(extents.width),height-DIST_AXIS2FIGURE_Y+extents.height+DIST_XTICKS2AXIS_Y);
		cairo_show_text (cr, tick);
#ifdef PLOTEXTENTS
		cairo_set_source_rgba(cr, 1.0, 0.0, 0.0, 1.0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X+(gdouble)(width-2*DIST_AXIS2FIGURE_X)/(graph->xticks->tick_n-1)*i-0.5*(extents.width),height-DIST_AXIS2FIGURE_Y+extents.height+DIST_XTICKS2AXIS_Y);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgba(cr, 0.0, 0.0, 0.0, 1.0);
#endif
	}

	/* determine significance for rounding tick labels */
	sprintf(str,"%%.%df",graph->yticks->tick_step_significance);

	/* plot y ticks */
	for(i=0;i<graph->yticks->tick_n;i++) {
		sprintf(tick,str,graph->yticks->tick_labels[graph->yticks->tick_n-1-i]/pow(10,graph->yticks->tick_exponent));
		cairo_text_extents(cr,tick, &extents);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X-extents.width-DIST_YTICKS2AXIS_X,DIST_AXIS2FIGURE_Y+(gdouble)(height-2*DIST_AXIS2FIGURE_Y)/(graph->yticks->tick_n-1)*i+(extents.height)/2.0);
		cairo_show_text (cr, tick);
		cairo_stroke(cr);
#ifdef PLOTEXTENTS
		cairo_set_source_rgba(cr, 1.0, 0.0, 0.0, 1.0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X-extents.width-DIST_YTICKS2AXIS_X,DIST_AXIS2FIGURE_Y+(gdouble)(height-2*DIST_AXIS2FIGURE_Y)/(graph->yticks->tick_n-1)*i+(extents.height)/2.0);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgba(cr, 0.0, 0.0, 0.0, 1.0);
#endif
	}

	/* plot x exponent */
	if(graph->xticks->tick_exponent) {
		cairo_text_extents(cr,"x10", &extents);
		cairo_set_source_rgb(cr, 0, 0, 0);
		cairo_move_to (cr, width-DIST_AXIS2FIGURE_X+DIST_XEXPONENT2AXIS_X,height-DIST_AXIS2FIGURE_Y+extents.height/2.0);
		cairo_show_text (cr, "x10");
#ifdef PLOTEXTENTS
		/* plot exponent extents */
		cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
		cairo_move_to (cr, width-DIST_AXIS2FIGURE_X+DIST_XEXPONENT2AXIS_X,height-DIST_AXIS2FIGURE_Y+extents.height/2.0);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif
		cairo_set_font_size (cr, FONTSIZETICKSEXPONENT);
		sprintf(tick,"%d",graph->xticks->tick_exponent);
		cairo_set_source_rgb(cr, 0, 0, 0);
		cairo_move_to (cr, width-DIST_AXIS2FIGURE_X+DIST_XEXPONENT2AXIS_X+extents.width,height-DIST_AXIS2FIGURE_Y-extents.height/2.0);
		cairo_show_text (cr, tick);
#ifdef PLOTEXTENTS
		/* plot exponent extents */
		cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
		cairo_move_to (cr, width-DIST_AXIS2FIGURE_X+DIST_XEXPONENT2AXIS_X+extents.width,height-DIST_AXIS2FIGURE_Y-extents.height/2.0);
		cairo_text_extents(cr,tick, &extents);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif
	}

	/* y exponent */
	if(graph->yticks->tick_exponent) {
		cairo_text_extents(cr,"x10", &extents);
		cairo_set_source_rgb(cr, 0, 0, 0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X,DIST_AXIS2FIGURE_Y-DIST_YEXPONENT2AXIS_Y);
		cairo_show_text (cr, "x10");

#ifdef PLOTEXTENTS
		cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X,DIST_AXIS2FIGURE_Y-DIST_YEXPONENT2AXIS_Y);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif
		cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
		cairo_set_font_size (cr, FONTSIZETICKSEXPONENT);
		sprintf(tick,"%d",graph->yticks->tick_exponent);
		cairo_set_source_rgb(cr, 0, 0, 0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X+extents.width,DIST_AXIS2FIGURE_Y-DIST_YEXPONENT2AXIS_Y-extents.height);
		cairo_show_text (cr, tick);
#ifdef PLOTEXTENTS
		cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
		cairo_move_to (cr, DIST_AXIS2FIGURE_X+extents.width,DIST_AXIS2FIGURE_Y-DIST_YEXPONENT2AXIS_Y-extents.height);
		cairo_text_extents(cr,tick, &extents);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif
		cairo_select_font_face (cr, "Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);
		cairo_set_font_size (cr, FONTSIZETICKS);
	}
	
	/* set line color to gray */
	cairo_set_source_rgba(cr, 0.5, 0.5, 0.5, 1.0); /* opaque, do copy */
	/* set line type to dashed */
	gdouble dashes[2] = {5,5};	
	cairo_set_dash (cr, dashes, 2, 0);

	/* plot vertical grid lines */
	for ( i = 1; i < graph->xticks->tick_n-1; i++ ) {
		cairo_move_to (cr, DIST_AXIS2FIGURE_X+(gdouble)(width-2*DIST_AXIS2FIGURE_X)/(graph->xticks->tick_n-1)*i,height-DIST_AXIS2FIGURE_Y);
		cairo_line_to (cr, DIST_AXIS2FIGURE_X+(gdouble)(width-2*DIST_AXIS2FIGURE_X)/(graph->xticks->tick_n-1)*i,DIST_AXIS2FIGURE_Y);
	}
	/* plot horizontal grid lines */
	for ( i = 1; i < graph->yticks->tick_n-1; i++ ) {
		cairo_move_to (cr, DIST_AXIS2FIGURE_X,(gdouble)DIST_AXIS2FIGURE_Y+(gdouble)(height-2*DIST_AXIS2FIGURE_Y)/(graph->yticks->tick_n-1)*i);
		cairo_line_to (cr, width-DIST_AXIS2FIGURE_X,(gdouble)DIST_AXIS2FIGURE_Y+(gdouble)(height-2*DIST_AXIS2FIGURE_Y)/(graph->yticks->tick_n-1)*i);
	}
	cairo_stroke(cr);

	cairo_destroy(cr);
	
	return 0;
}

static gint gtk_graph_create_grid_surface(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_grid_surface called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);

	if(graph->xtype==LINEAR && graph->ytype==LINEAR) {
		return gtk_graph_create_grid_surface_linear(widget);
	} else if (graph->xtype==LOG && graph->ytype==LINEAR) {
		return gtk_graph_create_grid_surface_log(widget);
	} else if (graph->xtype==LINEAR && graph->ytype==LOG) {
		return gtk_graph_create_grid_surface_log(widget);
	} else if (graph->xtype==LOG && graph->ytype==LOG) {
		return gtk_graph_create_grid_surface_log(widget);
	}

	return 0;
}

static gint gtk_graph_create_data_surface_log(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_data_surface_log called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	gint i;
	cairo_t *cr;
	gint width, height;

	/* determine size of drawing area */
	width = gdk_window_get_width(gtk_widget_get_window(widget)); 
	height = gdk_window_get_height(gtk_widget_get_window(widget));

	/* create the data surface, which will be used lateron in the on_expose_event callback function */
	if(graph->data_surface) {
		cairo_surface_destroy(graph->data_surface);
		graph->data_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	} else {
		graph->data_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	}
	cr = cairo_create(graph->data_surface);

	/* plot background */
	cairo_set_source_rgba(cr, 0, 0, 0, 0.0); /* translucent, do not copy */
	cairo_paint(cr);

	/* scaling factor from data to pixels x */
	gdouble xdata2pix = (width-2.0*DIST_AXIS2FIGURE_X)/(log10(graph->xrange[1])-log10(graph->xrange[0]));

	/* scaling factor from data to pixels y */
	gdouble ydata2pix = (height-2.0*DIST_AXIS2FIGURE_Y)/(graph->yrange[1]-graph->yrange[0]);

	/* plot data */
	cairo_set_line_width(cr, 2.0);
	cairo_set_source_rgba(cr, 0, 0, 0, 1.0);

	cairo_move_to(cr, DIST_AXIS2FIGURE_X+(log10(graph->xdata[0])-log10(graph->xrange[0]))*xdata2pix, height-DIST_AXIS2FIGURE_Y-(graph->ydata[0]-graph->yrange[0])*ydata2pix);
	for(i=1;i<graph->ndata;i++) {
		if(graph->xdata[i]>=graph->xrange[0] && graph->xdata[i]<=graph->xrange[1] && graph->ydata[i]>=graph->yrange[0] && graph->ydata[i]<=graph->yrange[1]) {
			cairo_line_to(cr, DIST_AXIS2FIGURE_X+(log10(graph->xdata[i])-log10(graph->xrange[0]))*xdata2pix, height-DIST_AXIS2FIGURE_Y-(graph->ydata[i]-graph->yrange[0])*ydata2pix);
		} else {
			cairo_stroke(cr);
		}
	}
	cairo_stroke(cr);

	cairo_destroy(cr);

	return 0;
}

static gint gtk_graph_create_data_surface_linear(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_data_surface_linear called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	gint i;
	cairo_t *cr;
	gint width, height;

	/* determine size of drawing area */
	width = gdk_window_get_width(gtk_widget_get_window(widget)); 
	height = gdk_window_get_height(gtk_widget_get_window(widget));

	/* create the data surface, which will be used lateron in the on_expose_event callback function */
	if(graph->data_surface) {
		cairo_surface_destroy(graph->data_surface);
		graph->data_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	} else {
		graph->data_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	}

	/* only proceed if there really is data available */
	if (!graph->ndata) {
		return 0;
	}

	cr = cairo_create(graph->data_surface);

	/* plot background */
	cairo_set_source_rgba(cr, 0, 0, 0, 0.0); /* translucent, do not copy */
	cairo_paint(cr);

	/* scaling factor from data to pixels x */
	gdouble xdata2pix = (width-2.0*DIST_AXIS2FIGURE_X)/(graph->xrange[1]-graph->xrange[0]);

	/* scaling factor from data to pixels y */
	gdouble ydata2pix = (height-2.0*DIST_AXIS2FIGURE_Y)/(graph->yrange[1]-graph->yrange[0]);

	/* plot data */
	cairo_set_line_width(cr, 2.0);
	cairo_set_source_rgba(cr, 0, 0, 0, 1.0);

	cairo_move_to(cr, DIST_AXIS2FIGURE_X+(graph->xdata[0]-graph->xrange[0])*xdata2pix, height-DIST_AXIS2FIGURE_Y-(graph->ydata[0]-graph->yrange[0])*ydata2pix);
	for(i=1;i<graph->ndata;i++) {
		if(graph->xdata[i]>=graph->xrange[0] && graph->xdata[i]<=graph->xrange[1] && graph->ydata[i]>=graph->yrange[0] && graph->ydata[i]<=graph->yrange[1]) {
			cairo_line_to(cr, DIST_AXIS2FIGURE_X+(graph->xdata[i]-graph->xrange[0])*xdata2pix, height-DIST_AXIS2FIGURE_Y-(graph->ydata[i]-graph->yrange[0])*ydata2pix);
		} else {
			cairo_stroke(cr);
		}
	}
	cairo_stroke(cr);

	cairo_destroy(cr);

	return 0;
}

static gint gtk_graph_create_data_surface(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_data_surface called\n");
#endif
	
	GtkGraph *graph = GTK_GRAPH(widget);

	if(graph->xtype==LINEAR && graph->ytype==LINEAR) {
		return gtk_graph_create_data_surface_linear(widget);
	} else if (graph->xtype==LOG && graph->ytype==LINEAR) {
		return gtk_graph_create_data_surface_log(widget);
	} else if (graph->xtype==LINEAR && graph->ytype==LOG) {
		return gtk_graph_create_data_surface_log(widget);
	} else if (graph->xtype==LOG && graph->ytype==LOG) {
		return gtk_graph_create_data_surface_log(widget);
	}

	return 0;
}

static gint gtk_graph_create_total_surface(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_create_total_surface called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	cairo_t *cr;
	gint width, height;

	/* determine size of drawing area */
	width = gdk_window_get_width(gtk_widget_get_window(widget)); 
	height = gdk_window_get_height(gtk_widget_get_window(widget));

	/* create the total surface, which will be used lateron in the on_expose_event callback function */
	if(graph->total_surface) {
		cairo_surface_destroy(graph->total_surface);
		graph->total_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	} else {
		graph->total_surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,width,height);
	}
	
	cr = cairo_create(graph->total_surface);
	
	if(graph->axis_surface) {
		/* set source surface to created axis surface or a one color surface (see on_realize callback function) */
		cairo_set_source_surface (cr, graph->axis_surface, 0, 0); /* source = axis surface */
//		cairo_set_source_rgb(cr, 0, 0, 0); /* source = one color surface */
		/* create a mask for this surface (equal to the axis surface itself here) */
		cairo_mask_surface(cr,graph->axis_surface, 0, 0);
		cairo_fill(cr);
	}

	if(graph->label_surface) {
		/* set source surface to created label surface or a one color surface (see on_realize callback function) */
		cairo_set_source_surface (cr, graph->label_surface, 0, 0); /* source = label surface */
//		cairo_set_source_rgb(cr, 0, 0, 0); /* source = one color surface */
		/* create a mask for this surface (equal to the label surface itself here) */
		cairo_mask_surface(cr,graph->label_surface, 0, 0);
		cairo_fill(cr);
	}

	if(graph->grid_surface) {

		/* set source surface to created grid surface or a one color surface (see on_realize callback function) */
	    cairo_set_source_surface (cr, graph->grid_surface, 0, 0); /* source = grid surface */
//		cairo_set_source_rgb(cr, 0.5, 0.5, 0.5); /* source = one color surface */
		/* create a mask for this surface (equal to the surface itself here) */
		cairo_mask_surface(cr,graph->grid_surface, 0, 0);
		cairo_fill(cr);
	}

	if(graph->data_surface) {
		/* set source surface to created data surface or a one color surface (see on_realize callback function) */
//		cairo_set_source_surface (cr, graph->data_surface, 0, 0); /* source = data surface */
		cairo_set_source_rgb(cr, 0, 0, 1); /* source = one color surface */
		/* create a mask for this surface (equal to the surface itself here) */
		cairo_mask_surface(cr,graph->data_surface, 0, 0);
		cairo_fill(cr);
	}

	cairo_destroy(cr);

	return 0;
}

static gint gtk_graph_draw_zoom(GtkWidget *widget, cairo_t *cr, gint width, gint height)
{
#ifdef DEBUG
	printf("\tgtk_graph_draw_zoom called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);

	/* draw the zoom rectangele */
	if(graph->ndata && graph->tool_state == ZOOM_BUSY) {
		cairo_set_source_rgb(cr, 1, 0, 0);
		cairo_rectangle(cr,(graph->xrangezoom[0]-graph->xrange[0])/(graph->xrange[1]-graph->xrange[0])*(width-2*DIST_AXIS2FIGURE_X)+DIST_AXIS2FIGURE_X,-(graph->yrangezoom[0]-graph->yrange[0])/(graph->yrange[1]-graph->yrange[0])*(height-2*DIST_AXIS2FIGURE_Y)+height-DIST_AXIS2FIGURE_Y,graph->mouse[0]-((graph->xrangezoom[0]-graph->xrange[0])/(graph->xrange[1]-graph->xrange[0])*(width-2*DIST_AXIS2FIGURE_X)+DIST_AXIS2FIGURE_X),graph->mouse[1]-(-(graph->yrangezoom[0]-graph->yrange[0])/(graph->yrange[1]-graph->yrange[0])*(height-2*DIST_AXIS2FIGURE_Y)+height-DIST_AXIS2FIGURE_Y));
		cairo_stroke(cr);
	}

	return 0;
}

static gint gtk_graph_draw_point(GtkWidget *widget, cairo_t *cr, gint width, gint height)
{
#ifdef DEBUG
	printf("\tgtk_graph_draw_point called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	gchar tick[100];
	
	/* only draw pointer when mouse is in axis area and data is available */
	if(graph->ndata && graph->mouse[0]>DIST_AXIS2FIGURE_X && graph->mouse[0]<width-DIST_AXIS2FIGURE_X && graph->mouse[1]>DIST_AXIS2FIGURE_Y && graph->mouse[1]<height-DIST_AXIS2FIGURE_Y) {

		/* scaling factor from data to pixels and vice versa */
		//gdouble pix2xdata = (graph->xrange[1]-graph->xrange[0])/(width-2.0*DIST_AXIS2FIGURE_X);
		//gdouble xdata2pix = 1.0/pix2xdata;

		/* scaling factor from data to pixels and vice versa */
		gdouble pix2ydata = (graph->yrange[1]-graph->yrange[0])/(height-2.0*DIST_AXIS2FIGURE_Y);
		gdouble ydata2pix = 1.0/pix2ydata;

		/* plot vertical line */
		cairo_set_source_rgb(cr, 1, 0, 0);
		cairo_move_to(cr,graph->mouse[0],DIST_AXIS2FIGURE_Y+1);
		cairo_line_to(cr,graph->mouse[0],height-DIST_AXIS2FIGURE_Y);
		cairo_stroke(cr);

		/* calculate index of data at mouse position (now via bi-section algorithm but maybe this can be made faster in some way) */
		gint i;
		gint MIN = 0;
		gint MAX = graph->ndata;
		gint elem = graph->ndata/2;

		if(graph->xtype==LINEAR) {
			gdouble x = (graph->mouse[0]-DIST_AXIS2FIGURE_X)*1.0/(width-2*DIST_AXIS2FIGURE_X)*(graph->xrange[1]-graph->xrange[0])+graph->xrange[0];

			for (i=0;i<(gint) ceil(log(graph->ndata)/log(2));i++) {
				if(graph->xdata[elem]<x) {
					MIN = elem;
					elem = (elem+MAX)/2;
				} else if (graph->xdata[elem]>x) {
					MAX = elem;
					elem = (elem+MIN)/2;
				}
			}
		} else if (graph->xtype==LOG) {
			gdouble x = pow(10,(((graph->mouse[0]-DIST_AXIS2FIGURE_X)*1.0/(width-2*DIST_AXIS2FIGURE_X))*((ceil(log10(graph->xrange[1])))-(floor(log10(graph->xrange[0]))))+(floor(log10(graph->xrange[0])))));

			for (i=0;i<(gint) ceil(log(graph->ndata)/log(2));i++) {
				if(graph->xdata[elem]<x) {
					MIN = elem;
					elem = (elem+MAX)/2;
				} else if (graph->xdata[elem]>x) {
					MAX = elem;
					elem = (elem+MIN)/2;
				}
			}
		}

		if ((graph->ydata[elem]-graph->yrange[0])*ydata2pix<(height-2*DIST_AXIS2FIGURE_Y) && (graph->ydata[elem]-graph->yrange[0])*ydata2pix>0) {
			/* plot horizontal line */
			cairo_move_to(cr,DIST_AXIS2FIGURE_X+1,height-DIST_AXIS2FIGURE_Y-(graph->ydata[elem]-graph->yrange[0])*ydata2pix);
			cairo_line_to(cr,width-DIST_AXIS2FIGURE_X,height-DIST_AXIS2FIGURE_Y-(graph->ydata[elem]-graph->yrange[0])*ydata2pix);
			cairo_stroke(cr);

			/* plot small box around data point of interest */
			cairo_move_to(cr, graph->mouse[0]-4, height-DIST_AXIS2FIGURE_Y-(graph->ydata[elem]-graph->yrange[0])*ydata2pix-4);
			cairo_rel_line_to (cr,8,0);
			cairo_rel_line_to (cr,0,8);
			cairo_rel_line_to (cr,-8,0);
			cairo_rel_line_to (cr,0,-8);
			cairo_stroke(cr);
		}

		/* plot current position text */
		cairo_set_font_size (cr, FONTSIZETICKSEXPONENT);
		sprintf(tick,"(x,y) = (%.3e,%.3e)",graph->xdata[elem],graph->ydata[elem]);
		cairo_move_to(cr, 5, height-5);
		cairo_show_text (cr, tick);

#ifdef PLOTEXTENTS
		/* plot exponent extents */
		cairo_text_extents_t extents;
		cairo_text_extents(cr,tick, &extents);
		cairo_set_source_rgb(cr, 1.0, 0.0, 0.0);
		cairo_move_to (cr, 5,height-4);
		cairo_rel_line_to (cr,extents.width,0);
		cairo_rel_line_to (cr,0,-extents.height);
		cairo_rel_line_to (cr,-extents.width,0);
		cairo_rel_line_to (cr,0,extents.height);
		cairo_stroke(cr);
		cairo_set_source_rgb(cr, 0.0, 0.0, 0.0);
#endif
	}

	return 0;
}

gint gtk_graph_title(GtkWidget* widget, gchar* title)
{
#ifdef DEBUG
	printf("\tgtk_graph_title called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	graph->title = title;

	if(gtk_widget_get_realized(widget)) {
		gtk_graph_create_label_surface(widget);		

		gtk_graph_create_total_surface(widget);

//		gtk_widget_queue_draw(widget);
	}
	
	return 0;
}

gint gtk_graph_xlabel(GtkWidget *widget, gchar* xlabel)
{
#ifdef DEBUG
	printf("\tgtk_graph_xlabel called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	graph->xlabel = xlabel;

	if(gtk_widget_get_realized(widget)) {
		gtk_graph_create_label_surface(widget);		

		gtk_graph_create_total_surface(widget);

//		gtk_widget_queue_draw(widget);
	}
	
	return 0;
}

gint gtk_graph_ylabel(GtkWidget *widget, gchar* ylabel) 
{
#ifdef DEBUG
	printf("\tgtk_graph_ylabel called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
    graph->ylabel = ylabel;

	if(gtk_widget_get_realized(widget)) {
		gtk_graph_create_label_surface(widget);		

		gtk_graph_create_total_surface(widget);

//		gtk_widget_queue_draw(widget);
	}
	

	return 0;
}

gint gtk_graph_plot(GtkWidget *widget, gdouble* xdata, gdouble* ydata, gint ndata)
{
#ifdef DEBUG
	printf("\tgtk_graph_plot called\n");
#endif
	
	GtkGraph *graph = GTK_GRAPH(widget);
	graph->xdata = xdata;
	graph->ydata = ydata;
	graph->ndata = ndata;
	graph->xtype = LINEAR;
	graph->ytype = LINEAR;

	gint i;

	/* determine x range */
	graph->xrange[0] = INFINITY;
	graph->xrange[1] = -INFINITY;
	for(i=0;i<graph->ndata;i++) {
		if (graph->xdata[i] < graph->xrange[0]) {
			graph->xrange[0] = graph->xdata[i];
		}
		if (graph->xdata[i] > graph->xrange[1]) {
			graph->xrange[1] = graph->xdata[i];
		}
	}

	/* determine y range */
	graph->yrange[0] = INFINITY;
	graph->yrange[1] = -INFINITY;
	for(i=0;i<graph->ndata;i++) {
		if (graph->ydata[i] < graph->yrange[0]) {
			graph->yrange[0] = graph->ydata[i];
		}
		if (graph->ydata[i] > graph->yrange[1]) {
			graph->yrange[1] = graph->ydata[i];
		}
	}
	
	if(gtk_widget_get_realized(widget)) {
		gtk_graph_create_grid_surface(widget);
		gtk_graph_create_data_surface(widget);	

		gtk_graph_create_total_surface(widget);

		gtk_widget_queue_draw(widget);
	}

	return 0;
}

gint gtk_graph_semilogx(GtkWidget *widget, gdouble* xdata, gdouble* ydata, gint ndata)
{
#ifdef DEBUG
	printf("\tgtk_graph_semilogx called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	graph->xdata = xdata;
	graph->ydata = ydata;
	graph->ndata = ndata;
	graph->xtype = LOG;
	graph->ytype = LINEAR;

	return 0;
}

gint gtk_graph_semilogy(GtkWidget *widget, gdouble* xdata, gdouble* ydata, gint ndata)
{
#ifdef DEBUG
	printf("\tgtk_graph_semilogy called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	graph->xdata = xdata;
	graph->ydata = ydata;
	graph->ndata = ndata;
	graph->xtype = LINEAR;
	graph->ytype = LOG;

	return 0;
}

gint gtk_graph_loglog(GtkWidget *widget, gdouble* xdata, gdouble* ydata, gint ndata)
{
#ifdef DEBUG
	printf("\tgtk_graph_loglog called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	graph->xdata = xdata;
	graph->ydata = ydata;
	graph->ndata = ndata;
	graph->xtype = LOG;
	graph->ytype = LOG;

	return 0;
}

void gtk_graph_start_zooming(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_start_zooming called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	gint i;

	/* determine x range */
	graph->xrange[0] = INFINITY;
	graph->xrange[1] = -INFINITY;
	for(i=0;i<graph->ndata;i++) {
		if (graph->xdata[i] < graph->xrange[0]) {
			graph->xrange[0] = graph->xdata[i];
		}
		if (graph->xdata[i] > graph->xrange[1]) {
			graph->xrange[1] = graph->xdata[i];
		}
	}

	/* determine y range */
	graph->yrange[0] = INFINITY;
	graph->yrange[1] = -INFINITY;
	for(i=0;i<graph->ndata;i++) {
		if (graph->ydata[i] < graph->yrange[0]) {
			graph->yrange[0] = graph->ydata[i];
		}
		if (graph->ydata[i] > graph->yrange[1]) {
			graph->yrange[1] = graph->ydata[i];
		}
	}

	/* set initial zoomranges */
	graph->xrangezoom[0]=graph->xrange[0];
	graph->yrangezoom[0]=graph->yrange[0];
	graph->xrangezoom[1]=graph->xrange[1];
	graph->yrangezoom[1]=graph->yrange[1];

	graph->tool = ZOOM;
	graph->tool_state = ZOOM_READY;
}

void gtk_graph_stop_zooming(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_stop_zooming called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	graph->tool = NONE;
}

void gtk_graph_start_pointing(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_start_pointing called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	graph->tool = POINT;
}

void gtk_graph_stop_pointing(GtkWidget *widget)
{
#ifdef DEBUG
	printf("\tgtk_graph_stop_pointing called\n");
#endif

	GtkGraph *graph = GTK_GRAPH(widget);
	graph->tool = NONE;
}
