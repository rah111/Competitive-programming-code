#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long n,p;

    cin >> n;

    p=(n*(n+1))/2;

    if( p%2==0)
    {
        cout << 0 << endl;

    }

    else

        cout << 1 << endl;
    return 0;
}
