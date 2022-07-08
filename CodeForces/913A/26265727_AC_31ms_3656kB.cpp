#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,p;

    cin >> n >> m;

    int i;

    if(n<27)
    {
        p=1;

        for(i=1;i<=n;i++)
        {
            p=p*2;
        }

        cout << m%p << endl;
    }
    else
    {
        cout << m << endl;
    }
    return 0;
}
