#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int i,maxp=0,cnt=0;

    for(i=0;i<n;i++)
    {
        cin >> a[i];

        if(maxp<a[i])
        {
            maxp=a[i];
        }
    }



    for(i=0;i<n;i++)
    {
        if(a[i]<maxp)
        {
            cnt=cnt+(maxp-a[i]);
        }
    }

    cout << cnt << endl;

    return 0;
}
