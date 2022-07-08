
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,k,a,res,r;

    cin >> n >> k >> m;



    int suma=0;

    r=n;

    n--;

    while(n--)
    {
        cin >> a;

        suma=suma+a;
    }



    r=r*m;

    if(r>=suma)
    {
        res=r-suma;

        if(res<=k)
        {
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }



    return 0;
}
