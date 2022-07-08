#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    string p;

    int m,a,r,g,i,t,Q;



    while(test--)
    {
        cin >> p;



        m=0;
    a=0;
    r=0;
    g=0;
    i=0;
    t=0;


        for(Q=0;Q<p.size();Q++)
        {
            if(p[Q]=='M')
            {
                m++;
            }
            else if(p[Q]=='A')
            {
                a++;

            }
            else if(p[Q]=='R')
            {
                r++;
            }
            else if(p[Q]=='G')
            {
                g++;
            }
            else if(p[Q]=='I')
            {
                i++;
            }
            else if(p[Q]=='T')
            {
                t++;
            }
        }

        r=r/2;
        a=a/3;

        cout << min(a,min(r,min(i,min(t,min(g,m))))) << endl;

        p.clear();

    }
    return 0;
}
