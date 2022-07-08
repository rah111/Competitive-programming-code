#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
int i,k,l,m,n;
scanf("%d",&k);
 
for(i=0;i<k;i++){
 
    scanf("%d%d%d",&l,&m,&n);
 
if(l<m && l>n){
 
    printf("%d\n",l);
 
}
 
   else if(l<n && l>m){
 
    printf("%d\n",l);
 
}
 
   else  if(m<n && m>l){
 
    printf("%d\n",m);
 
}
 
    else if(m<l && m>n){
 
    printf("%d\n",m);
 
}
 
    else if(n<l && n>m){
 
    printf("%d\n",n);
 
}
 
else if(n<m && n>l){
 
    printf("%d\n",n);
 
}
 
 
}
 
 
return 0;
}