#include <stdio.h>
#include <stdlib.h>

int main(){

int n;
scanf("%d",&n);

int a[n];

int i,j,k,l;

for(i=0;i<n;i++){

    scanf ("%d%d",&j,&k);

    l=j+k;

    a[i]=l;
}

for(i=0;i<n;i++){

    printf("%d\n",a[i]);
}



return 0;
}