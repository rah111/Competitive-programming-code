#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int x,y,z;

    int cntx=0,cnty=0,cntz=0;

    while(n--)
    {
        cin >> x >> y >> z;

        cntx=cntx+x;

        cnty=cnty+y;

        cntz=cntz+z;

    }

    if(cntx==0 && cnty==0 && cntz==0)
    {
        cout << "YES" << endl;

    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
