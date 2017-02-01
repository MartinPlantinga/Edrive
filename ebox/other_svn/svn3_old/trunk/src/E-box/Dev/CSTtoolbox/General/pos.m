function pos(fig)

%variables
str='';

%process inputs
if nargin==0
    figs=flipud(get(0,'children'));
else
    figs=fig;
    if(ischar(fig)),figs=str2num(fig);end;
end

%copy to clipboard
for ii=1:length(figs)
    fig=figs(ii);
    posvec=get(fig,'position');
    str=[str,['set(',num2str(fig),',''position'',[',num2str(posvec(1,1)),' ',num2str(posvec(1,2)),' ',num2str(posvec(1,3)),' ',num2str(posvec(1,4)),']);'  ]];
end
clipboard('copy',str);
disp(['Clipboard contains: ' clipboard('paste')]);
disp(['Paste this after your "figure(' num2str(figs(end)) ');" command in your m-file.']);

end%function

