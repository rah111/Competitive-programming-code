#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    int n,p,newNum,k,t=0;

    while(test--)
    {
        scanf("%d",&n);

        newNum=0;

        k=n;

        while(n!=0)
        {
            p=n%10;

            newNum=(newNum*10)+p;

            n=n/10;
        }

        t++;

        if(newNum==k)
        {
            printf("Case %d: Yes\n",t);
        }
        else
        {
            printf("Case %d: No\n",t);
        }
    }
    return 0;
}
