#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int i,g=0;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    for(i=1;i<n;i=i+2)
    {
        g = g+(a[i]-a[i-1]);
    }

    cout << g << endl;

    return 0;
}


