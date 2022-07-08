#include <stdio.h>
#include <stdlib.h>

int main(){

int i,n,k,l=0;

scanf("%d %d",&n,&k);

int a[n];

for(i=0;i<n;i++){

    scanf("%d",&a[i]);

    if(a[i]%k==0){

        l=l+1;
    }
}

printf("%d",l);


return 0;}