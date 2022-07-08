#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    int n,x1,y1,x2,y2,x,y,t=0;

    while(test--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        scanf("%d",&n);

        t++;

        printf("Case %d:\n",t);

        while(n--)
        {
            scanf("%d%d",&x,&y);

            if((x>x1 && x<x2)&&(y>y1 && y<y2))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
