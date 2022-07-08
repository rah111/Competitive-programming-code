#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,t=0;

    scanf("%d",&test);

    double r1,r2,r3,a,b,c,h,s,area,angle1,angle2,angle3;
    double area1,area2,area3;

    while(test--)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);

        a=r1+r2;
        b=r2+r3;
        c=r1+r3;

        s=(a+b+c)/2.0;

        area=sqrt(s*(s-a)*(s-b)*(s-c));

        angle1=acos(((c*c)+(a*a)-(b*b))/(2*c*a));

        angle2=acos(((b*b)+(c*c)-(a*a))/(2*b*c));

        angle3=acos(((a*a)+(b*b)-(c*c))/(2*a*b));

        area1=0.5*(r1*r1)*angle1;

        area2=0.5*(r2*r2)*angle3;

        area3=0.5*(r3*r3)*angle2;

        area=area-(area1+area2+area3);

        t++;

        printf("Case %d: %0.6f\n",t,area);

    }


    return 0;
}
