#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d",&n);
    int a[n];

    int i,m=0;
    for(i=0;i<n;i++){

        scanf("%d",&a[i]);

        m=m+a[i];


    }



    printf("%d",m);
    return 0;
}
