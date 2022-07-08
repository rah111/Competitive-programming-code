
#include<bits/stdc++.h>

using namespace std;

double EPS = 1e-9; // 10^-9 = 0.0000000001
bool isEqual(double a, double b) {
   return abs(a - b) <= EPS;
}
bool isGreater(double a, double b) { // is a greater than b
   return a > b + EPS;
}
bool isSmaller(double a, double b) { // is a smaller than b
   //return isGreater(b, a);
   return a + EPS < b;
}


int main()
{
     int test;

    cin >> test;

    double a,b,c;

    double low,high,mid,iteration,key;

    while(test--)
    {
        scanf("%lf%lf%lf",&a,&b,&c);

        low=0;
        high=1e5;
        iteration=100;

        while(isSmaller(low,high) &&  iteration--)
        {
            mid=(low+high)/2;

            key= a*mid + b*sin(mid);

            if(isSmaller(key,c))
            {
                low=mid;
            }
            else
            {
                high=mid;
            }
        }


        printf("%0.6f\n",mid);

    }

    return 0;


}
