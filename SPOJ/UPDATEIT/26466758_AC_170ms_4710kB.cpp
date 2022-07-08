
#include<bits/stdc++.h>
#define io  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    io

    int test,i;

    cin >> test;

    int n,u,range1,range2,number,q,index;

    while(test--)
    {
        cin >> n >> u;

        long long int a[n]={0};

        while(u--)
        {
            cin >> range1 >> range2 >> number;

            a[range1]=a[range1]+number;

            if(range2+1<n)
            {
               a[range2+1]=a[range2+1]-number;
            }
        }

        for(i=1;i<n;i++)
        {
            a[i]=a[i]+a[i-1];

        }

        cin >> q;

        while(q--)
        {
            cin >> index;

            cout << a[index] << endl;
        }
    }

    return 0;
}
