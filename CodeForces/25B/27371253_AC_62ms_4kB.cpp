#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    int i;

    if(n==2)
    {
        cout << s << endl;
    }
    else if(n==3)
    {
        cout << s << endl;
    }
    else if(n%2==0)
    {
        for(i=0;i<s.size();i++)
        {
            cout << s[i];

            if(i%2!=0 && i!=n-1)
            {
                cout << "-";
            }
        }

        cout << endl;
    }
    else
    {
        cout << s[0] << s[1] << s[2] <<"-";

        for(i=3;i<s.size();i++)
        {
            cout << s[i];

            if(i%2==0 && i!=n-1)
            {
                cout <<"-" ;
            }
        }

        cout << endl;
    }


    return 0;
}
