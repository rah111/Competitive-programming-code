#include <stdio.h>
#include <stdlib.h>

int main(){

int n;
scanf("%d",&n);
int ar[n];

int i,j,k=0;

for(i=0;i<n;i++){

    scanf("%d",&j);

    k=k+j;
}

printf("%d",k);

return 0;



}