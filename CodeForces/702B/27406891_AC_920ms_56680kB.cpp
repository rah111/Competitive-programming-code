
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    map<ll,ll> p;

    int i,k,n,t,j;

    ll cnt;

    cin >> n;

    int a[n];


    for(i=0;i<n;i++)
    {
        cin >> a[i];

        p[a[i]]++;
    }

    cnt=0;

    for(i=0;i<n;i++)
    {
        k=a[i];

        p[k]--;

        for(j=1;j<=30;j++)
        {
            t=pow(2,j)-k;

            if(t>0 && p[t]!=0)
            {
                cnt=cnt+p[t];

            }
        }
    }

    cout << cnt << endl;

    return 0;
}
