/* gtk_graph.h */

#ifndef __GTK_GRAPH_H__
#define __GTK_GRAPH_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <math.h>

#include <gtk/gtk.h>
#include <cairo.h>

G_BEGIN_DECLS

#define GTK_GRAPH(obj) GTK_CHECK_CAST(obj, gtk_graph_get_type (), GtkGraph)
#define GTK_GRAPH_CLASS(klass) GTK_CHECK_CLASS_CAST(klass, gtk_graph_get_type(), GtkGraphClass)
#define GTK_IS_GRAPH(obj) GTK_CHECK_TYPE(obj, gtk_graph_get_type())

#define FONTSIZE 				12				/* fontsize for tekst */
#define FONTSIZETICKS 			FONTSIZE-2		/* fontsize for ticks */
#define FONTSIZETICKSEXPONENT 	FONTSIZE-3 		/* fontsize for exponent of ticks */

#define DIST_TEXT2AXIS			0.7*FONTSIZE
#define DIST_AXIS2FIGURE_X		80				/* horizontal distance between the axis and the figure */
#define DIST_AXIS2FIGURE_Y		50				/* vertical distance between the axis and the figure */
#define DIST_XLABEL2AXIS_Y		2*FONTSIZE		/* vertical distance between (the top of) the xlabel and the axis */
#define DIST_YLABEL2AXIS_X		55				/* horizontal distance between (the right of) the ylabel and the axis */
#define DIST_TITLE2AXIS_Y		2*FONTSIZE		/* vertical distance between (the bottom) of the title and the axis */
#define DIST_XTICKS2AXIS_Y		DIST_TEXT2AXIS	/* vertical distance between (the top) of the xticks and the axis */
#define DIST_YTICKS2AXIS_X		DIST_TEXT2AXIS	/* horizontal distance between (the right) of the yticks and the axis */
#define DIST_XEXPONENT2AXIS_X	DIST_TEXT2AXIS	/* horizontal distance between (the left) of the x exponent and the axis */
#define DIST_YEXPONENT2AXIS_Y	DIST_TEXT2AXIS	/* vertical distance between (the bottom) of the y exponent and the axis */

#define DEFAULTWIDTH 500
#define DEFAULTHEIGHT 400

#define min(A,B) (A)<(B)?(A):(B)
#define max(A,B) (A)>(B)?(A):(B)
#define abs(A) (A)>0?(A):(-A)

//#define PLOTEXTENTS /* plot boundaries around labels */
#define LATEX /* plot labels in with LaTeX */
#define DEBUG /* only printf is DEBUG flag is set */

typedef struct _GtkGraph GtkGraph;
typedef struct _GtkGraphClass GtkGraphClass;

/* plot types */
enum {
LINEAR = 0,
LOG,
NPLOTTYPES
};

/* tools */
enum {
NONE = 0,
POINT,
ZOOM,
NTOOLS
};

/* tool states */
enum {
ZOOM_READY=0,
ZOOM_BUSY,
NZOOMINGSTATES
};

/* ticks_t structure */
typedef struct {
	gint tick_n; /* number of ticks */
	gint tick_exponent; /* exponent of ticks */
	gdouble tick_step; /* step of ticks */
	gint tick_step_significance; /* step significance of ticks */
	gdouble *tick_labels; /* ticks labels */
} ticks_t;

/* GtkGraph structure */
struct _GtkGraph {
	GtkWidget widget;
	cairo_surface_t *axis_surface;
	cairo_surface_t *label_surface;
	cairo_surface_t *grid_surface;
	cairo_surface_t *data_surface;
	cairo_surface_t *total_surface;
	gchar *xlabel; /* string for xlabel */
	gchar *ylabel; /* string for ylabel */
	gchar *title; /* string for title */
	gdouble *xdata; /* x data */
	gdouble *ydata; /* y data */
	gint ndata; /* number of data points */
	gdouble xrange[2]; /* range of x data */
	gdouble yrange[2]; /* range of y data */
	gdouble xrangezoom[2]; /* zoomed range of x data */
	gdouble yrangezoom[2]; /* zoomed range of y data */
	gint mouse[2]; /* mouse position [pix] */
	ticks_t *xticks; /* ticks for x axis */
	ticks_t *yticks; /* ticks for y axis */
	gint tool; /* tool: zoom or point */
	gint tool_state; /* state: busy or something */
	gint xtype; /* linear or log x axis */
	gint ytype; /* linear or log y axis */
	gdouble tstart;
	gdouble tstop;
};

struct _GtkGraphClass {
	GtkWidgetClass parent_class;
};

/* prototypes */
GtkWidget *gtk_graph_new(void);
gint gtk_graph_start_timer(GtkWidget* widget);
gint gtk_graph_stop_timer(GtkWidget *widget);
gint gtk_graph_title(GtkWidget *widget, gchar* title);
gint gtk_graph_xlabel(GtkWidget *widget, gchar* xlabel);
gint gtk_graph_ylabel(GtkWidget *widget, gchar* ylabel);
gint gtk_graph_plot(GtkWidget *widget, gdouble* xdata, gdouble* ydata, gint ndata);
gint gtk_graph_semilogx(GtkWidget *widget, gdouble* xdata, gdouble* ydata, gint ndata);
gint gtk_graph_semilogy(GtkWidget *widget, gdouble* xdata, gdouble* ydata, gint ndata);
gint gtk_graph_loglog(GtkWidget *widget, gdouble* xdata, gdouble* ydata, gint ndata);
void gtk_graph_start_zooming(GtkWidget *widget);
void gtk_graph_stop_zooming(GtkWidget *widget);
void gtk_graph_start_pointing(GtkWidget *widget);
void gtk_graph_stop_pointing(GtkWidget *widget);

G_END_DECLS

#endif /* __GKT_GRAPH_H__ */
