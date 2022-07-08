#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int i,r=0,mxp=0;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='R')
        {

            while(i<s.size() && s[i]=='R')
            {
                r++;

                i++;
            }

            if(r>mxp)
            {
                mxp=r;
            }

            r=0;
        }
    }

    cout << mxp << endl;

    return 0;
}
