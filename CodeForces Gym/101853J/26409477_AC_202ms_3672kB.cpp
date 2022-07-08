#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int a[10009];

    int n,i,p,maxp,t;

    while(test--)
    {
        memset(a,0,sizeof(a));

        cin >> n;

        for(i=1;i<=n;i++)
        {
            cin >> p;

            a[p]++;
        }

        maxp=0;

        for(i=1;i<=10000;i++)
        {
            if(a[i]!=0)
            {
                t=a[i]+a[i+1];



            if(t>maxp)
            {
                maxp=t;
            }


            }
        }

        cout << maxp << endl;


    }

    return 0;
}
