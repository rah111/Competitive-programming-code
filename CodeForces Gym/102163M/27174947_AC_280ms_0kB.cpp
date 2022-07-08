#include<bits/stdc++.h>

using namespace std;

double EPS = 1e-9;
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
    int t;

    scanf("%d",&t);

    double b1,p1,b2,p2,res1,res2;

    while(t--)
    {
        scanf("%lf%lf%lf%lf",&b1,&p1,&b2,&p2);



        if(b1==0 && b2==0)
        {
             printf("Lazy\n");
             continue;
        }

        if(b1==0 && b2!=0)
        {
            printf("Congrats\n");
            continue;
        }

        if(b1!=0 && b2==0)
        {
            printf("HaHa\n");
            continue;
        }

         res1=p1*log10(b1);

         res2=p2*log10(b2);


        if(isEqual(res1,res2))
        {
            printf("Lazy\n");
        }
        else if(isGreater(res1,res2))
        {
            printf("HaHa\n");
        }
        else if(isSmaller(res1,res2))
        {
            printf("Congrats\n");
        }

    }

    return 0;
}
