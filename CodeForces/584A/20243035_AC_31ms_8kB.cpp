#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,b;

    cin >> n >> b;

    if(b<10)
    {
        while(n>0)
    {
        cout << b;

        n--;
    }
    }

    else
    {
        if(n==1)
        {
            cout << -1;


        }

        else
        {
            cout << 1;

            while(n>1)
            {
                cout << 0;

                n--;
            }
        }
    }
    return 0;
}
