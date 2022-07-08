#include <stdio.h>
#include <stdlib.h>


int main(){
int i,j,k,l,n=0,m;

scanf("%d",&i);

for (j=1;j<=i;j++){

    scanf("%d%d",&k,&l);

    for(m=k;m<=l;m++){

        if(m%2!=0){

            n=n+m;
        }
    } printf("Case %d: %d\n",j,n);

    n=0;
}

return 0;}