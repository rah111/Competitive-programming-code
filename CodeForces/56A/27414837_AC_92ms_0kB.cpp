#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,c=0,cnt=0,p;

    cin >> n;

    string s;

    while(n--)
    {



    cin >> s;

    if(s=="ABSINTH" || s=="BEER" || s=="BRANDY"

       || s=="CHAMPAGNE" || s=="GIN" || s=="RUM"

       || s=="SAKE" || s=="TEQUILA" || s=="VODKA"

       || s=="WHISKEY" || s=="WINE")
    {
        cnt++;
    }
    else
    {



    p=(int)s[0];

    if(p>47 && p<58)
    {
        c=0;

        for(i=0;i<s.size();i++)
        {
            p=(int)s[i]-48;

            c=(c*10)+p;
        }

        if(c<18)
        {
            cnt++;
        }


    }
    }
    }

    cout << cnt << endl;

    return 0;
}
