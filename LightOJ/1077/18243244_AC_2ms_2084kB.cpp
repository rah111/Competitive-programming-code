#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase;

    cin >> testcase;

    long long x,y,m,n,i=1;

    while(testcase--)
    {
        cin >> x >> y >> m >> n;

        cout << "Case " << i << ": " << (__gcd(abs(x-m),abs(y-n))+1) << endl;

        i++;
    }
    return 0;
}
