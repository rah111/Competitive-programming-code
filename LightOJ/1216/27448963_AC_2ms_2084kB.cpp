#include<bits/stdc++.h>
#define pi 2*acos(0.0)

using namespace std;

int main()
{
    int t,tr=0;

    cin >> t;

    double r1,r2,h,p,r3,v;

    while(t--)
    {
        cin >> r1 >> r2 >> h >> p;

        r3=r2+(((r1-r2)/h)*p);

        v=((pi*p)/3.00)*((r2*r2)+(r2*r3)+(r3*r3));

        tr++;

        printf("Case %d: %0.6lf\n",tr,v);

    }

    return 0;
}
