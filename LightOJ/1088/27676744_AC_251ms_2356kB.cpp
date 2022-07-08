#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d",&t);

    int ts=0;

    int n,q,ans,i,l,u;

    while(t--)
    {
        scanf("%d %d",&n,&q);

        int a[n];

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        ts++;

        printf("Case %d:\n",ts);

        while(q--)
        {
            scanf("%d %d",&l,&u);

            ans=upper_bound(a,a+n,u)-lower_bound(a,a+n,l);

            printf("%d\n",ans);
        }
    }

    return 0;
}
