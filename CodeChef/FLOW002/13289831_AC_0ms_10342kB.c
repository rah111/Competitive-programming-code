#include <stdio.h>
#include <stdlib.h>

int main(){

 int t,a,b,c,l=0;

 scanf("%d",&a);

 for(t=0;t<a;t++){

    scanf("%d%d",&b,&c);

    l=b%c;

    printf("%d\n",l);
 }

return 0;}
