#include <stdio.h>
#include <stdlib.h>

int main(){

int i,j,k,l=1;

scanf("%d",&i);

for(j=0;j<i;j++){

    scanf("%d",&k);

    while(k>0){

        l=l*k;

        k=k-1;

          }

          printf("%d\n",l);

          l=1;
}

return 0;}