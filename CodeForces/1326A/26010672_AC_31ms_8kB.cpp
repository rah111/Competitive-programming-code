#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int n;

    while(test--)
    {
        cin >> n;

        if(n==1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << 2;

            n=n-1;

            while(n--)
            {
                cout << 3 ;
            }

            cout << endl;
        }


    }
    return 0;
}
