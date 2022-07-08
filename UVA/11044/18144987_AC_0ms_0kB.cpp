#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase;

    cin >> testcase;

    int n,m,d,p;

    while(testcase--)
    {
        cin >> n >> m;

        d=n%3;

        p=m%3;

        cout << ((n-d)*(m-p))/9 <<endl;
    }
    return 0;
}
