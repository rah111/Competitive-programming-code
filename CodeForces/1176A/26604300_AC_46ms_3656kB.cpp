#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    int q;

    cin >> q;

    ll n,p;

    int cnt;

    while(q--)
    {
        cin >> n;

        cnt=0;



        while(n!=1)

        {
            p=n;

            if(p%2==0)
            {
                n=(n/2);

                cnt++;
            }
            else if(p%3==0)
            {
                n=(n/3)*2;

                cnt++;
            }
            else if(p%5==0)
            {
                n=(n/5)*4;

                cnt++;
            }
            else
            {
                break;
            }
        }

        if(n==1)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
