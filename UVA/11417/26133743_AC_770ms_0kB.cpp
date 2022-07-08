#include <stdio.h>
#include <stdlib.h>



int gcd(int i,int j){

int k,m;

if(i%j==0 ) {return j;}

else if(j%i==0) {return i;}

else {

        if(i<j)m=i;
 if(i>j)m=j;

for(k=(m/2);k>=1;k--){

    if(m%k==0){

        if(i%k==0 && j%k==0){

        break;



        }
    }
}return k;}


}

int main(){

int i,j,g=0,k=1;

while(k!=0){

    scanf("%d",&k);

    for(i=1;i<k;i++){
for(j=i+1;j<=k;j++)
 {
 g+=gcd(i,j);
 }
    }

    if(k!=0)printf("%d\n",g);
    g=0;}


return 0;

}