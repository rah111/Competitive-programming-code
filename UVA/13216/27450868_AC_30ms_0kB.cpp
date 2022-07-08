#include<bits/stdc++.h>

using namespace std;

/*int bigmod(int a,int b,int M)
{
    if(b==0) return 1%M;

    int x = bigmod(a,b/2,M);

    x = (x*x)% M;

    if(b%2==1)
    {
        x=(x*a)%M;
    }

    return x;
}*/

// repeatative pattern

int main()
{


    int t;

    cin >> t;

    string s;

    int l;

    while(t--)
    {
        cin >> s;

        l=s.size();

        if(l==1 && s[0]=='0')
        {
            cout << 1 << endl;
        }
        else if(l==1 && s[0]=='1')
        {
            cout << 66 << endl;
        }
        else
        {
            l=(int) s[s.size()-1] -48;

            l=l%5;

            if(l==1)
            {
                cout << 16 << endl;
            }
            else if(l==2)
            {
                cout << 56 << endl;
            }
            else  if(l==3)
            {
                cout << 96 << endl;
            }
            else if(l==4)
            {
                cout << 36 << endl;
            }
            else if(l==0)
            {
                cout << 76 << endl;
            }


        }
    }

    return 0;
}
