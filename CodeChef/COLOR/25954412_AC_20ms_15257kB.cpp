#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase,n,r=0,g=0,b=0;

    char ar[100005];

    cin >> testcase;

    while(testcase--)
    {
        cin >> n;

        cin >> ar;

        for(int i=0;i<n;i++)
        {
            if(ar[i]=='R')
            {
                r++;
            }

            if(ar[i]=='G')
            {
                g++;
            }

            if(ar[i]=='B')
            {
                b++;
            }
        }

        int p=max(max(r,g),b);

        cout << n-p <<endl;

        r=0;
        g=0;
        b=0;


    }

    return 0;
}