#include<bits/stdc++.h>

#define io  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int N=200000;

int main()
{
    io;

    int n,k,q;

    cin >> n >> k >> q;

    int a[N+9]={0};
    int p[N+9]={0};

    int l,r;

    while(n--)
    {
        cin >> l >> r;

        a[l]=a[l]+1;

        if(r+1<=N)
        {
            a[r+1]=a[r+1]-1;
        }
    }

    int i;
    
    if(a[1]>=k)
    {
        p[1]=1;
    }

    for(i=2;i<=N;i++)
    {
        a[i]=a[i]+a[i-1];

        if(a[i]>=k)
        {
            p[i]=1;
        }
    }

    for(i=2;i<=N;i++)
    {
        p[i]=p[i]+p[i-1];
    }

    int c , b;



    while(q--)
    {
        cin >> c >> b;



        cout << p[b]-p[c-1] << endl;
    }



    return 0;
}
