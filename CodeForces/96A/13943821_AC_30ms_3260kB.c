#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,k=0;

    char a[100];

    gets(a);

    while(a[i]!='\0'){

        if(a[i]=='1'){

            for(i=i+1;i<100;i++){

                if(a[i]=='1'){

                    k=k+1;

                    if(k>=6){

        printf("YES");

        return 0;
    }
                }

                if(a[i]=='0'){  k=0;

                i=i-1;

                    break;
                }
            }
        }

        if(a[i]=='0'){

            for(i=i+1;i<100;i++){

                if(a[i]=='0'){

                    k=k+1;

                    if(k==6){

        printf("YES");

        return 0;
    }
                }

                if(a[i]=='1'){  k=0;

                i=i-1;

                    break;
                }
            }
        } i++;
    }



    if(k<7){

        printf("NO");
    }
    return 0;
}