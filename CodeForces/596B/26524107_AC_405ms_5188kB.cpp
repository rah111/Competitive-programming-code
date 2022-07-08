#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    long long int a[n+1];

    int i;

    for(i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    a[0]=0;

    long long int cnt=0;

    for(i=1;i<=n;i++)
    {
        cnt=cnt+abs(a[i]-a[i-1]);
    }

    cout << cnt << endl;

    return 0;
}
