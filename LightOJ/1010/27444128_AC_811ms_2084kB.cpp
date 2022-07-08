#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,tr=0;

    cin >> t;

    int m,n,p,res,mx;

    while(t--)
    {
        cin >> m >> n;

        tr++;

        if(m==1 || n==1)
        {
            printf("Case %d: %d\n",tr,max(m,n));
        }
        else if(m==2 || n==2)
        {
            mx=max(m,n);

            res=mx;

            if(mx%4==1 || mx%4==3)
            {
                res++;
            }
            if(mx%4==2)
            {
                res=res+2;
            }

            printf("Case %d: %d\n",tr,res);
        }
        else
        {
            p=m*n;

            if(p%2!=0)
            {
                printf("Case %d: %d\n",tr,(p/2)+1);
            }
            else
            {
                printf("Case %d: %d\n",tr,(p/2));
            }
        }
    }


    return 0;
}
