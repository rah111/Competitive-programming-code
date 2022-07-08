#include <stdio.h>
#include <stdlib.h>

int main(){

int i,j,k,n,m=0,l;

scanf("%d",&i);

for(j=0;j<i;j++){

    scanf("%d",&k);

    while(k>0){ l=k%10;
    m=m*10+l;

    k=k/10;}

    printf("%d\n",m);

    m=0;
}

return 0;}