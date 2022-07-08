#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[200009];
ll b[200009];

ll n;

ll b_search(ll target )
{
    ll l=1;
    ll r=n;

    ll ans=-1;

    ll mid;

    while(l<=r)
    {
        mid=l+(r-l)/2;

        if(target>=a[mid])
        {
            l=mid+1;
        }
        else
        {
            ans = mid;

            r = mid-1;
        }
    }

    return ans;
}

int main()
{
    ll q;

    cin >> n >> q;

    ll i;

    for(i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i];
    }

    for(i=1;i<=q;i++)
    {
        cin >> b[i];
    }

    ll pre=0,temp;

    for(i=1;i<=q;i++)
    {
        temp=b_search(pre+b[i]);

        if(temp==-1)
        {
            pre=0;

            cout << n << endl;
        }
        else
        {
            cout << n-temp+1 << endl;

            pre=pre+b[i];
        }
    }

    return 0;

}
