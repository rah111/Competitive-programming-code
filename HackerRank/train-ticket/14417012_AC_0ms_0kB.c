#include<stdio.h>
#include<stdlib.h>

int main(){

int j,k,l;

scanf("%d",&l);

if(l%8==0){printf("SUB");}

else if((l+1)%8==0){printf("SLB");}

else {

    j=l%8;

    if(j<=6){

        if(j==1 || j==4){

            printf("LB");
        }

        if(j==2 || j==5){

            printf("MB");
        }

        if(j==3 || j==6){

            printf("UB");
        }
    }



    }



return 0;}