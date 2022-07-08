#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;

    cin >> n >> p;

    if(n==1 && p==10)
    {
        cout << "-1" << endl;
    }

    else if(p==10 && n >1)
    {
        n=n-1;

        cout << 1 ;

        while(n--)
        {
            cout << 0 ;
        }
    }

    else

    {
        while(n--)
        {
            cout << p ;
        }
    }


    return 0;
}
