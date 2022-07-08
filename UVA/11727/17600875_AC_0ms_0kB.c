#include <stdio.h>
#include <stdlib.h>



int main(){

int i,k,l,m,n;
scanf("%d",&k);

for(i=1;i<=k;i++){

    scanf("%d%d%d",&l,&m,&n);

if(l<m && l>n){

    printf("Case %d: %d\n",i,l);

}

   else if(l<n && l>m){

    printf("Case %d: %d\n",i,l);

}

   else  if(m<n && m>l){

    printf("Case %d: %d\n",i,m);

}

    else if(m<l && m>n){

    printf("Case %d: %d\n",i,m);

}

    else if(n<l && n>m){

    printf("Case %d: %d\n",i,n);

}

else if(n<m && n>l){

    printf("Case %d: %d\n",i,n);

}


}


return 0;
}