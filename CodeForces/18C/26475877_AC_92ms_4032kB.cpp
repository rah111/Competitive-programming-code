#include<bits/stdc++.h>
#define io  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    io;

    int n;

    cin >> n;

    int i;

    int a[n]={0};

    for(i=0;i<n;i++)
    {
        cin >> a[i];

    }

    for(i=1;i<n;i++)
    {
        a[i]=a[i]+a[i-1];

    }


    int cnt=0;

    for(i=0;i<n-1;i++)
    {
        if(a[i]==(a[n-1]-a[i]))
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
