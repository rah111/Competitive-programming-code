#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int tlime,tmil,tsalt;

    tlime=c*d;

    tmil=(k*l)/nl;

    tsalt=p/np;

    int x=min(tlime,tmil);

    int y=min(x,tsalt);

    cout << y/n << endl;


    return 0;
}
