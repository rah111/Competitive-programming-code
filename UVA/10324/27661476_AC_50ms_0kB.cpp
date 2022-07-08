#include<bits/stdc++.h>

using namespace std;

int main()
{
    string p;

    int q;

    int a,b,cs=1,mx,mn,sz,i,k;

    while(cin >> p)
    {

        sz=p.size();

        int a[sz];

        a[0]=p[0]-'0';

        for(i=1;i<sz;i++)
        {
            a[i]=a[i-1]+(p[i]-'0');
        }

        cin >> q;

        printf("Case %d:\n",cs++);

        while(q--)
        {
            cin >> k >> b;

            mx=max(k,b);

            mn=min(k,b);




        if(a[mx]==a[mn] && p[mx]==p[mn])

        {
            printf("Yes\n");
        }
        else if((a[mx]-(a[mn-1]))==(mx-mn+1))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        }
    }
    return 0;
}
