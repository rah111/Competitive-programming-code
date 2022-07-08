
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,a;

    cin >> n >> m >> a;

    long long p,k;

    if(n%a==0)
    {
        p=n/a;
    }
    else
        p=(n/a)+1;

    if(m%a==0)
    {
        k=m/a;
    }
    else
        k=(m/a)+1;

    cout << p*k << endl;



    return 0;
}
