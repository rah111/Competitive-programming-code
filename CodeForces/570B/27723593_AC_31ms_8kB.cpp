#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;

    cin >> n >> m;

    if(n==1)
    {
        cout << 1 << endl;
    }
    else
    {
        if(m-1<n-m)
        {
            cout << m+1 << endl;
        }
        else
        {
            cout << m-1 << endl;
        }
    }

    return 0;
}
