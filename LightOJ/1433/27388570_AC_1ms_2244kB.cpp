#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    int ox,oy,ax,ay,bx,by,t=0;

    double a,b,c,angle,s;

    while(test--)
    {
        scanf("%d%d%d%d%d%d",&ox,&oy,&ax,&ay,&bx,&by);

        a=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));

        b=a; // radius

        c=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));

        angle=acos(((a*a)+(b*b)-(c*c))/(2*a*b));

        s=a*angle; // arc length s= radius*angle

        t++;

        printf("Case %d: %.5lf\n",t,s);
    }

    return 0;
}
