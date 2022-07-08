#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,n,m,st,et,tt;

    cin >> test;

    string s ,e;

    while(test--)
    {
        cin >> n >> m;

        m=m*60;

        tt=0;

        while(n--)
        {
            cin >> s >> e;

            st=(((((int)s[0]-48)*10)+((int)s[1]-48))*60)+((((int)s[3]-48)*10)+((int)s[4]-48));

            et=(((((int)e[0]-48)*10)+((int)e[1]-48))*60)+((((int)e[3]-48)*10)+((int)e[4]-48));

           tt= tt+(et-st);
        }

        if(tt>=m)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }


    }
    return 0;
}
