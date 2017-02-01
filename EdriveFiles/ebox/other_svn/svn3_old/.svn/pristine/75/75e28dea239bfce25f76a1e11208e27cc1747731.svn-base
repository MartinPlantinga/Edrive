% make_all_install
% makefile which installs a complete package for EtherCAT and E/box
% if desired the specific toolboxes and files for TU/e can be installed

current_ebox_dir = cd;

% Build libraries independent of Matlab
!./buildall

% Build E-Scope
cd Apps/E-Scope/
!./buildescope
addpath([pwd,'/engine'])
addpath([pwd,'/guiv25'])
addpath([pwd,'/tde_gate'])

cd engine
make
cd ..

cd tde_gate
make

cd(current_ebox_dir)

versioninfo = ver('matlab');
% If version is not R2007b or R2010a or R2011b
if ~strcmp(versioninfo.Release,'(R2007b)') && ~strcmp(versioninfo.Release,'(R2010a)') && ~strcmp(versioninfo.Release,'(R2011b)')
    disp('Warning: Unsupported version of MATLAB')
end

% Scripts
cd Scripts/
!chmod a+x svn_update.sh
cd(current_ebox_dir)

% Install Toolboxes
cd Toolbox
make
cd(current_ebox_dir)
    
% Install target
cd Targets
make;
cd(current_ebox_dir)

% Templates
cd Templates/Specific
make;
cd(current_ebox_dir)

% Create symbolic links in matlabroot only
cd(matlabroot)
cd rtw/c/ectarget/
eval(['!ln -sf ',current_ebox_dir,'/Libs/Coin/u1.h u1.h'])
eval(['!ln -sf ',current_ebox_dir,'/Libs/ec/ec.h ec.h'])
eval(['!ln -sf ',current_ebox_dir,'/Libs/Timer_posix_AK/timer.h timer.h'])
% eval(['!cat ec_main.c | sed -e ''s/\/usr\/local\/matlab2011b/',strrep(matlabroot,'/','\/'),'/'' >> ec_main.c'])
cd(current_ebox_dir)

% Add ectarget directory to path
eval( ['addpath ' matlabroot '/rtw/c/ectarget/']);
eval( ['addpath ' matlabroot '/rtw/c/ectarget/sfunctions']);
savepath
rehash

clear current_ebox_dir versioninfo install_tue