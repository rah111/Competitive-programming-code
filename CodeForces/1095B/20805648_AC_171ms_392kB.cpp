#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

     int low1,low2,hi1,hi2,i;

    for(i=0;i<n;i++)
    {
        cin >> a[i];


    }

     sort(a,a+n);

     low1=a[0];
     low2=a[1];
     hi2=a[n-2];
     hi1=a[n-1];

    if((hi1-low2)<(hi2-low1))

        cout << hi1-low2 << endl;
    else

        cout << hi2-low1 << endl;

    return 0;
}
