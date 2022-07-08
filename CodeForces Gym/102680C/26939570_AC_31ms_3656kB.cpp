#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,n,s,i;

    cin >> test;

    while(test--)
    {
        cin >> n >> s;

        int a[n];

        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        bool flg=0;

        for(i=0;i<n-1;i++)
        {
            if(a[i]+s>a[i+1])
            {
                flg=1;

                cout << "YES" << endl;
                
                break;
            }
        }

        if (flg==0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
