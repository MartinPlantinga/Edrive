function frdDET=calcDET(G,varargin)
if(nargin==1)
    if( isa(G,'frd') || isa(G,'idfrd') )
        G=chgunits(G,'rad/s'); 
        w=G.Frequency; 
    else 
        w=2*pi*logspace(0,3,1000); 
    end 
elseif(nargin==2) 
    w = varargin{1}; 
end 

Gjw=freqresp(G,w);     
for ii=1:length(w)  
    detjw(ii)=det(Gjw(:,:,ii));         
end  
frdDET=frd(detjw,w);

end%function
