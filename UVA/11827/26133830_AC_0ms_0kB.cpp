#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase,n,c=0,m=0,g;

    cin >> testcase;

    getchar();

    string s;

    int a[10000];

    while(testcase--)
    {
        getline(cin,s);

        stringstream p(s);

        while(p>>n)
        {
            a[c++]=n;
        }

        for(int i=0;i<c-1;i++)
        {
            for(int j=i+1;j<c;j++)
            {
                g=__gcd(a[i],a[j]);

                if(m<g)
                {
                    m=g;
                }
            }
        }

        cout << m << endl;

        m=0;
        c=0;
    }


    return 0;
}