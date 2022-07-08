#include <stdio.h>
#include <stdlib.h>


int main(){

int t,i,j,k;

scanf("%d",&t);

for(i=0;i<t;i++){

    scanf("%d%d",&j,&k);

    

    if(j>k)printf(">\n");
    if(j<k)printf("<\n");
     if (j==k)printf("=\n");
}

return 0;}