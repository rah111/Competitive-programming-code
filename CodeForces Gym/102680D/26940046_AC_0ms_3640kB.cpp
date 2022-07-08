#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,i;

    long long int t;

    cin >> n;

    while(n--)
    {
        cin >> t;



        if(t==1)
        {
            cout << "Neither" << endl;
        }
        else
        {
            bool flg=0;



        for(i=2;i<=sqrt(t);i++)
        {
            if(t%i==0)
            {
                flg=1;

                cout << "Composite" << endl;

                break;
            }
        }

        if(flg==0)
        {
            cout << "Prime" << endl;
        }

        }
    }
    return 0;
}

