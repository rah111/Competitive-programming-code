
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,d=0;

    cin >> t;

    double r;
    double circleArea,squareArea,result;
    double EPS=1e-9;

    while(t--)
    {
        d++;

        cin >> r;

        circleArea=2*acos(0.0)*r*r;

        squareArea=(2*r)*(2*r);

        result = (squareArea-circleArea)+EPS;

        printf("Case %d: %0.2lf\n",d,result);


    }


    return 0;
}
