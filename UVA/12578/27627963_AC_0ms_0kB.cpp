#include<bits/stdc++.h>
#define pi acos(-1)

using namespace std;

int main()
{
    int t;

    cin >> t;

    double l,w,r,a;

    while(t--)
    {
        cin >> l;

        w=(l*6)/10;

        r=l/5;

        a=pi*r*r;

        printf("%0.2lf %0.2lf\n",a,(l*w)-a);


    }
    return 0;
}
