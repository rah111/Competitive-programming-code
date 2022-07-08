
#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long

using namespace std;

int main()
{
    const ll e=1000000007;

    int t;

    cin >> t;

    int n,i;

    ll res;

    while(t--)
    {
        cin >> n;

        res=1;

        for(i=1;i<=n;i++)
        {
            res=((res%e)*(i%e))%e;
        }

        cout << res << endl;
    }
    return 0;

}
