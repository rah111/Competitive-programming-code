#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    int j,k,p;

    while(t--)
    {
        cin >> j >> k;

        p=__gcd(j,k);

        if(p==j)
        {
            cout << j << " " <<k <<endl;
        }
        else
            cout << "-1" <<endl;
    }
    return 0;
}