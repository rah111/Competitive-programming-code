#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,j,k,l;

    cin >> a >> b >> c;

    while(a!=0 || b!=0 || c!=0)
    {

        j=a*a;
        k=b*b;
        l=c*c;

        if(j+k==l)
        {
            cout <<"right" << endl;
        }

        else if(k+l==j)
        {
            cout <<"right" << endl;
        }

        else if(j+l==k)
        {
            cout <<"right" << endl;
        }

        else

            cout << "wrong" << endl;



            cin >> a >> b >> c;


    }

    return 0;
}