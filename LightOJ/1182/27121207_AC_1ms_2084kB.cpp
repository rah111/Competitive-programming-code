#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    int n,d,cnt,t=0;

    while(test--)
    {
        scanf("%d",&n);

        cnt=0;

        while(n!=0)
        {
            d=n%2;

            if(d==1)
            {
                cnt++;
            }

            n=n/2;
        }

        t++;

        if(cnt%2==0)
        {
            printf("Case %d: even\n",t);
        }
        else
        {
            printf("Case %d: odd\n",t);
        }
    }


    return 0;
}
