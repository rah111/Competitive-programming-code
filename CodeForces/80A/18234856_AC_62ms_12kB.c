#include <stdio.h>
#include <stdlib.h>


int main(){

int i,j,k,l,m,n,o=0;

scanf("%d%d",&l,&m);

for(i=l;i<=m;i++){ n=0;

    if(i%l!=0){

        k=sqrt(i)+1;

        for(j=2;j<=k;j++){

                if(i%j==0){ n=1;

                        k=0;
                        break;}

                if(j==k && n==0){
 o=i;

                }


        }

        if(o!=0 && i==m){

            printf("YES\n");

            break;
        }

        if(o!=0 && i<m){

            printf("NO\n");

            break;
        }


    }
}

if(o==0)printf("NO\n");

return 0;}