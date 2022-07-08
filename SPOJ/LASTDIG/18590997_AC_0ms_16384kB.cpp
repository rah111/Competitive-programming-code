#include <bits/stdc++.h>

using namespace std;

int  bigmod(int a,int b,int M)
{
    if(b==0)
    {
        return 1%M;
    }

    int x = bigmod( a , b/2 , M );

    x = ( x * x ) % M;

    if( b % 2 == 1 )
    {
        x = ( x * a ) % M ;

    }

    return x ;
}
int main()
{
    int testcase;

    cin >> testcase;

    long long m,p;

    while(testcase--)
    {
        cin >> m >> p;

    cout << bigmod(m,p,10) << endl;

    }


    return 0;
}
