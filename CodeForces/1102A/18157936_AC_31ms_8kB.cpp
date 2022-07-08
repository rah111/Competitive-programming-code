#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;

    cin >> n;

    k=(n*(n+1))/2;

    if(k%2==0)
    {
        cout << 0 << endl;
    }

    else

        cout << 1 << endl;
    return 0;
}
