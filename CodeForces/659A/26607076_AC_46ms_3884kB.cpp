#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,k;

    cin >> n >> a >> b;

    if(b<0)
    {
        b=abs(b);


        k=(a+(n-(b%n)))%n;

        if(k==0)
        {
            cout << n << endl;
        }
        else
        {
            cout << k << endl;
        }

    }
    else
    {
        k=(a+b)%n;

        if(k==0)
        {
            cout << n << endl;
        }
        else
        {
            cout << k << endl;
        }
    }
    return 0;
}
