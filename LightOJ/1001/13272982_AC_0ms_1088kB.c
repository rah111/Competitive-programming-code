#include <stdio.h>
#include <stdlib.h>


int main(){

int i;
scanf("%d",&i);

int j,k,l;

for(j=0;j<i;j++){
    
    
    scanf("%d",& k);
    
    if(k>10){
        
        printf("%d %d\n",k-10,10);
    }
    
else if(k<=10){  l=k/2;
        
        printf("%d %d\n",k-l,l);
    }
}










return 0;}