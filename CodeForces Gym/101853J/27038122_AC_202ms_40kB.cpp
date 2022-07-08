#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int cnt,maxp,p,n,i;

    while(test--)
    {
        cin >> n;

        int a[10005]={0};


        while(n--)
        {
            cin >> p;

            a[p]++;
        }

        maxp=0;
        cnt=0;

        for(i=2;i<=10000;i++)
        {
            cnt=a[i-1]+a[i];

            if(cnt>maxp)
            {
                maxp=cnt;
            }
        }

        cout << maxp << endl;
    }
    return 0;
}
