#include<bits/stdc++.h>

using namespace std;

int prime(int n)
{

    int i,j,k=0;

    j=sqrt(n);

    for(i=2; i<=j; i++)
    {

        if(n%i==0)
        {
            k=1;

            break;
        }
    }

    return k;
}

int reverse(int k)
{

    int j=0,n;
    while(k!=0)
    {

        n=k%10;
        k=k/10;

        j=j+n;
        if(k!=0)
        {
            j=j*10;
        }
    }

    return j;
}
int main()
{
    int i,j,k,l;

    while(scanf("%d",&j)!=EOF)

    {



        if(j>9)
        {
            i=prime (j);

            if(i==0)
            {
                k= reverse (j);

                l=prime(k);

                if(l==0 && k!=j)

                    printf("%d is emirp.\n",j);
                else
                    printf("%d is prime.\n",j);
            }

            else

                printf("%d is not prime.\n",j);
        }

        if(j<9)
        {
            i=prime (j);

            if(i==0)
                printf("%d is prime.\n",j);
            else
                printf("%d is not prime.\n",j);

        }
    }
//palindromic numbers can't be emirp

    return 0;
}
