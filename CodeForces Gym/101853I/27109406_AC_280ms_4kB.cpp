#include<bits/stdc++.h>

using namespace std;

//radius of inner circle r=d/2
// diagonal of square a*sqrt(2)=d where a is length of side
// area of inner circle = pi*(r^2)
// area of square (a^2)=(d^2)/2
// area p=(area of inner circle-area of square)
// result= (4*(half area of outer 4 circles))- p
 //        = after simplifying (d*d)/2

int main()
{
    int test;

    scanf("%d",&test);

    double a,b,d,res;

    double eps=1e-6;

    while(test--)
    {
        scanf("%lf%lf%lf",&a,&b,&d);

        res=(d*d)/2;

        res=res+eps;

        printf("%0.6lf\n",res);
    }

    return 0;
}
