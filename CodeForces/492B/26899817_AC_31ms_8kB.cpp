#include<bits/stdc++.h>

using namespace std;

double EPS = 1e-9; // 10^-9 = 0.0000000001

bool isGreater(double a, double b) { // is a greater than b
   return a > b + EPS;
}


int main()
{
    int n,l;

    cin >> n >> l;

    long long a[n];

    int i;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    double maxp=0,d;

    if(a[0]!=0)
    {
        if(isGreater((double)a[0],maxp))
        {
            maxp=(double)a[0];
        }
    }

     if(a[n-1]!=l)
    {
        if(isGreater((double)(l-a[n-1]),maxp))
        {
            maxp=(double)l-a[n-1];
        }

    }

    for(i=1;i<n;i++)
    {
        d=a[i]-a[i-1];

        d=d/2;

        if(isGreater(d,maxp))
        {
            maxp=d;
        }
    }

    printf("%.10f",maxp);

    return 0;
}
