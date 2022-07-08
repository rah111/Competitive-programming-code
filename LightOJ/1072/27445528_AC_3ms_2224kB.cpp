#include<bits/stdc++.h>
#define pi 2*acos(0.0)

using namespace std;

int main()
{
    int t,tr=0;

    cin >> t;


    double R,n,q,r;

    while(t--)
    {
        cin >> R >> n;



        q=sin(pi/n); // (360/n)/2 -> 180/2 -> pi/2

        r=(R*q)/(1+q); // sin(angle)=r/(R-r)

        tr++;

        printf("Case %d: %0.6lf\n",tr,r);
    }
    return 0;
}
