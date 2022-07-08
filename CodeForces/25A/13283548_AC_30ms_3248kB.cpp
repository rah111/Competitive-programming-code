#include <stdio.h>
#include <stdlib.h>

int main(){

int i,j,k,m=0,n=0,l,f;

scanf("%d",&k);

for(i=1;i<=k;i++){

    scanf("%d",&j);

    if(j%2!=0){

        n=n+1;

        l=i;
    }

    else if(j%2==0){

        m=m+1;

        f=i;
    }
}

if(n>m){

    printf("%d\n",f);
}

else if(n<m){

    printf("%d\n",l);
}

return 0;}