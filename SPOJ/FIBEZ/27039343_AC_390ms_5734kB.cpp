#include<bits/stdc++.h>

using namespace std;





int main()
{


    int a[500009];

    int mod=100000007;

    int i;

    a[0]=0;
    a[1]=1;

    for(i=2;i<=500000;i++)
    {
        a[i]=(a[i-1]+a[i-2])%mod;
    }

    int test;

    scanf("%d",&test);

    int n;

    while(test--)
    {
        scanf("%d",&n);

        printf("%d\n",a[n]);
    }

    return 0;
}
