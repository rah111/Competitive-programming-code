#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;

    int a[n],b[m];

    int i;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    for(i=0;i<m;i++)
    {
        cin >> b[i];
    }

    int temp;

    for(i=0;i<m;i++)
    {
        temp=upper_bound(a,a+n,b[i])-a;

        cout << temp << " ";
    }

    return 0;
}
