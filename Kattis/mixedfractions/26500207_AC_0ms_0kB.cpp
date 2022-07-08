
#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

using namespace std;

int main()
{
    ll a ,b;

    while(true)
    {
        cin >> a >> b;

        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            cout << a/b <<" " <<  a%b <<" / "  << b << endl;
        }
    }
    return 0;
}
