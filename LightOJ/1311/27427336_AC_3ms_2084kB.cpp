#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ts,tr=0;

    cin >> ts;

    double v1,v2,v3,a1,a2,t1,t2,p,q,d1,d2,d;

    while(ts--)
    {
        cin >> v1 >>v2 >> v3>> a1 >> a2;

        d1=(v1*v1)/(2*a1);

        d2=(v2*v2)/(2*a2);

        d=d1+d2;

        t1=v2/a2;

        t2=v1/a1;

        tr++;

        printf("Case %d: %0.6lf %0.6lf\n",tr,d,(v3*max(t1,t2)));

    }

    return 0;
}
