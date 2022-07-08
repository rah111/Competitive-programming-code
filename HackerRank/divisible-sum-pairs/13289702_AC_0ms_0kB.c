#include <stdio.h>
#include <stdlib.h>

int main(){

int i,j,k,l,m=0,n=0;

scanf("%d%d",&i,&j);

int a[i];

for(k=0;k<i;k++){

    scanf("%d",&a[k]);
}

for(k=0;k<i;k++){

    for(l=k+1;l<i;l++){ m=a[k]+a[l];

    if(m%j==0){

        n=n+1;
    } }

}

printf("%d",n);

return 0;}
