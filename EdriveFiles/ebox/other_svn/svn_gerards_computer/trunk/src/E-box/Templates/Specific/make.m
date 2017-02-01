% make installer for TU/e specific templates (pato,pizza,etc)

current_tbx_dir = cd;
tbxpath = toolboxdir('');

% pato
eval(['!cp -R pato/ ',tbxpath])
addpath([tbxpath,'/pato/'])
cd(tbxpath)
cd pato
!chmod a-w *.mdl *.jpg
cd(current_tbx_dir)

% printer
eval(['!cp -R printer/ ',tbxpath])
addpath([tbxpath,'/printer/'])
cd(tbxpath)
cd printer
!chmod a-w *.mdl
cd(current_tbx_dir)

% twin
eval(['!cp -R twin/ ',tbxpath])
addpath([tbxpath,'/twin/'])
cd twin
!chmod a-w *.mdl *.bmp
cd(current_tbx_dir)