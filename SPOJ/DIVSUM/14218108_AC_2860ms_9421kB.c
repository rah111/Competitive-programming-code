#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,g=0;

    scanf("%d",&l);

    for(k=0;k<l;k++){

        scanf("%d",&j);

        for(i=1;i<=(j/2);i++){

            if(j%i==0){

                g=g+i;
            }
        }

        printf("%d\n",g);

        g=0;

    }
    return 0;
}
