
#include <bits/stdc++.h>

#define ll long long

using namespace std;



 ll big_mod(ll b,ll p,ll m)
{


    ll p1,p2;

    if(p==0)
    {


        return 1;


    }
    else if(p%2!=0)
    {


        p1=((b%m)*(big_mod(b,p-1,m)%m))%m;



        return p1;
    }
    else
    {


        p2=(big_mod(b,p/2,m))%m;

        p2=(p2*p2)%m;



        return p2;

    }


}

int main()
{
    long long  b,p,m;

    while(cin >> b >> p >> m)
    {
        cout << big_mod(b,p,m) << endl;
    }



    return 0;
}
