#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    int cs=0,n,p,cnt,i;

    while(t--)
    {
        cin >> n;

        int a[n];

        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }

        cnt=0;

        p=a[0]-2;

        if(p%5==0)
        {
            cnt=cnt+(p/5);
        }
        else
        {
            cnt=cnt+(p/5)+1;
        }

        for(i=1;i<n;i++)
        {
            p=a[i]-a[i-1];

            if(p>0)
            {
                if(p%5==0)
                {
                    cnt=cnt+(p/5);
                }
                else
                {
                    cnt=cnt+(p/5)+1;
                }

            }
        }

        cs++;

        printf("Case %d: %d\n",cs,cnt);
    }
    return 0;
}
