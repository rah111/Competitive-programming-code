#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll a[5];

    int i;

    for(i=0;i<5;i++)
    {
        cin >> a[i];
    }

    sort(a,a+5);

    ll maxa=0,mina=0;

    for(i=4;i>=1;i--)
    {
        maxa=maxa+a[i];
    }

    for(i=0;i<4;i++)
    {
        mina=mina+a[i];
    }

    cout << mina << " " << maxa << endl;

    return 0;
}
