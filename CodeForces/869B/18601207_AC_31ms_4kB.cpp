#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  a,b;

    long long  j=1,i;

    cin >> a >> b;

    if(b-a>5)
    {
        cout << 0 << endl;
    }

    else if(a==b)
    {
        cout << 1 << endl;
    }

    else if(b-a<=5)
    {
        for( i=a+1;i<=b;i++)
        {
            j=(j*(i%10))%10;
        }

        cout << j << endl;
    }



    return 0;
}
