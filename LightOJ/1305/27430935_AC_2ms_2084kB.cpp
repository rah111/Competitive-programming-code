#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,ax,ay,bx,by,cx,cy,dx,dy,area,i,q,tr=0;

    scanf("%d",&t);

    while(t--){

        scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);

        dx=cx+ax-bx;

        dy=cy+ay-by;

        q=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));

        if(q<0)
        {
            q=q*(-1);


        }
            area=0.5*q;

            tr++;

        printf("Case %d: %d %d %d\n",tr,dx,dy,area);
    }
    
    return 0;
}

