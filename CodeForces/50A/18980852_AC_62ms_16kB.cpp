#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;

    cin >> m >> n;

    if(m*n==1)
    {
        cout << 0 << endl;
    }

    if(m*n>1)
    {
        cout << (m*n)/2 << endl;
    }
    return 0;
}
