#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll countDivisible(ll n)
{

    ll ans;

    if(n==0)
    {
        return 0;
    }

    ans=(n/3)*2;

    if(n%3==2)
    {
        ans++;
    }

    return ans;
}

int main()
{
    int t,tr=0;

    cin >> t;

    ll a ,b;

    while(t--)
    {
        cin >> a >> b;

        tr++;

        printf("Case %d: %ld\n",tr,countDivisible(b)-countDivisible(a-1));
    }

    return 0;
}
