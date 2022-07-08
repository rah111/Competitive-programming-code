#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int p,maxp=0;

    while(a--)
    {
        cin >> p;

        if(maxp<p)
        {
            maxp=p;
        }
    }

    int b;
    cin >> b;

    int q,maxq=0;

    while(b--)
    {
        cin >> q;

        if(maxq<q)
        {
            maxq=q;
        }
    }

    cout << maxp << " " << maxq << endl;

    return 0;
}
