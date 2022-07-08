#include<bits/stdc++.h>

using  namespace std;

int main()
{
    int t,ts=0;

    cin >> t;

    long long int n,sq;

    while(t--)
    {
        cin >> n;

        sq=sqrt(n);

        // perfect square has odd number of divisors
        // so alim wins

        ts++;

        if(sq*sq==n)
        {
            printf("Case %d: Yes\n",ts);
        }
        else
        {
            printf("Case %d: No\n",ts);
        }

    }
    return 0;
}
