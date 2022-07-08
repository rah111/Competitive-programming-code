#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    scanf("%d",&p);
    int a[7];
    int i,j,k=0;

    for(i=0;i<7;i++){

        scanf("%d",&a[i]);
    }

    for(i=0;i<7;i++){

        k=k+a[i];

        if(k==p || k>p){

            printf("%d",i+1);

            return 0;
        }
        if(i==6 && k<p){

            i= -1;
        }
    }
    return 0;
}