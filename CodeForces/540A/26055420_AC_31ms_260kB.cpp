#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string p,q;

    cin >> p >> q;

    int i,s,t;

    int cnt=0;

    for(i=0;i<n;i++)
    {


        s=abs(p[i]-q[i]);

        t=(10-max(p[i],q[i]))+min(p[i],q[i]);

        cnt=cnt+min(s,t);
    }

    cout << cnt << endl;

    return 0;
}
