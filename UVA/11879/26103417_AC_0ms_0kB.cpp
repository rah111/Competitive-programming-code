#include<bits/stdc++.h>

using namespace std;

int main()
{
    string p;

     int q,c,i;

    while(true)
    {
        cin >> p;



        if(p[0]=='0' && p.size()==1)
        {
            break;
        }
        else
        {
            q=0;

            for(i=0;i<p.size();i++)
            {
                c=p[i]-'0';

                q=(q*10)+c;

                q=q%17;
            }

            if(q==0)
            {
                cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
    }

    return 0;
}
