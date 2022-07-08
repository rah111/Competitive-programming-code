#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    string p;

    int k,m,cnt,i;

    while(test--)
    {
        cin >> p;

        cnt=0;

        m=0;
        k=0;

        for(i=0; i<p.size(); i++)
        {
            if(p[i]=='1')
            {
                k=i;

                i=p.size();
            }
        }

        for(i=p.size()-1; i>=0; i--)
        {
            if(p[i]=='1')
            {
                m=i;

                i=-1;
            }
        }

        if(k==m && m==0)
        {
            cout << 0 << endl;
        }
        else
        {
            for(i=k; i<=m; i++)
            {
                if(p[i]=='0')
                {
                    cnt++;
                }
            }

            cout << cnt << endl;


        }


    }


    return 0;
}
