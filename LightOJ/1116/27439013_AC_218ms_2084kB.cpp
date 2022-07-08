#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,tr=0;

    cin >> t;

    long long int w,p;

    while(t--)
    {
        cin >> w;

        p=w;

        tr++;

        if(p%2!=0)
        {
            printf("Case %d: Impossible\n",tr);
        }
        else
        {
            while(p%2==0)
            {
                p=p/2;
            }

            printf("Case %d: %ld %ld\n",tr,p,w/p);
        }

    }
    return 0;
}
