#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int j,i,c,n;

    j=0;

    string p;

    while(test--)
    {
        j++;

        cin >> n;

        cin >> p;

        c=0;

        for(i=0;i<n;i++)
        {
            if(p[i]=='.')
            {
                c++;

                i=i+2;
            }
        }

        p.clear();

        cout <<"Case " << j <<": " <<  c << endl;
    }
    return 0;
}
