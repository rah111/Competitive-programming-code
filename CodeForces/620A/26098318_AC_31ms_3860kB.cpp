#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,k,l,m,n;
    scanf("%d%d",&i,&j);
    scanf("%d%d",&k,&l);

    m=k-i;
    n=l-j;

    if(m<0){ m=m*-1;}
    if(n<0){ n=n*-1;}

    if(m==n){

        printf("%d",n);
    }
    if(m>n){

        printf("%d",m);
    }
    if(n>m){

        printf("%d",n);
    }

    return 0;
}
