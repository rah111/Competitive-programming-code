#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if( a%b==0)
        return b;

    return gcd(b,a%b);
}

int main()
{
    int n;

    cin >> n;

    int i,p,res;

    for(i=0;i<n;i++)
    {
        cin >> p;

        if(i>0)
        {
            res=gcd(res,p);
        }
        else
        {
            res=gcd(p,p);
        }
    }

    cout << res*n << endl;


    return 0;
}
