#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int i,j,u;

    i=(k*l)/nl;

    j=p/np;

    u=c*d;

    int o,t;

    o=min(i,j);

    t=min(o,u);

    cout << t/n << endl;
    return 0;
}
