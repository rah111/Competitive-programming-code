#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    int n,p,q,cnt,d,k,r=0;

    while(t--)
    {
        cin >> n >> p >> q;

        d=0;
        cnt=0;

        while(n--)
        {
            cin >> k;

            cnt=cnt+k;

            if(cnt<= q && d<p)
            {
                d++;
            }
        }

        r++;

        printf("Case %d: %d\n",r,d);
    }
    return 0;
}
