#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll bigmod(ll a,ll b,ll m)
{
    if(b==0)
        return 1%m;

    ll x=bigmod(a,b/2,m);

    x=(x*x)%m;

    if(b%2==1) x=(x*a)%m;

    return x;
}


int main()
{
    int t;

    cin >> t ;

    long long int a,b;

    while(t--)
    {
        cin >> a >> b;

        cout << bigmod(a,b,10) << endl;
    }

    return 0;
}
