#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int n,d=0;

    long long int p,cnt;

    while(test--)
    {
        cin >> n;

        cnt=0;
        d++;

        while(n--)
        {
            cin >> p;

            if(p>0)
            {
                cnt=cnt+p;
            }
        }

        printf("Case %d: %d\n",d,cnt);
    }
    return 0;
}
