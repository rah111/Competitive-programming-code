#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l;
    scanf("%d",&k);

    for(i=0;i<k;i++){


        scanf("%d%d",&j,&l);

        if(j==l){

            printf("=\n");
        }
        else if(j>l){

            printf(">\n");

                    }

                    else if(j<l){

                        printf("<\n");
                    }
    }
    return 0;
}