#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,res=0;

    int i;

    cin >> n;

    for(i=1;i<=n;i++)
    {
        res=res+pow(2,i);
    }

    cout << res << endl;
    return 0;
}
