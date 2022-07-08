#include <stdio.h>
#include <stdlib.h>

int main(){

int i,j,k,l,m=0,n=0;

scanf("%d",&i);

for(j=0;j<i;j++){

 scanf("%d%d",&k,&l);

 m=l-k;

 if(m>=2){n=n+1;}


}

printf("%d",n);

return 0;}
