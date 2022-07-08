#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,b;

    cin >> n >> m >> a >> b;

    int p,c,t;

    p=n*a;

    c=((n/m)*b)+((n%m)*a);

    if(n%m==0)
    {
        t=n*b;
    }
    else
    {
        t=((n/m)+1)*b;
    }

    cout << min(p,min(c,t)) << endl;



    return 0;
}
