#include<bits/stdc++.h>
#define ll long long int
#define N 1000000

using namespace std;

ll a[N+5];

void sod()
{
    int i,j;

    a[1]=0;

    for(i=1;i<=N;i++)
    {
        for(j=i+i;j<=N;j=j+i)
        {
            a[j]=a[j]+i;
        }
    }

}


int main()
{

    sod();

    int i;

    ll n;

    int cnt;

    while(cin >> n)
    {
        cnt=0;

        for(i=1;i<=N;i++)
        {
            if(a[i]<=n)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
