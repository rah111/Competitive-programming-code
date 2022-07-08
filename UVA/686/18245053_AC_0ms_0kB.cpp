#include <bits/stdc++.h>

using namespace std;
int mark[1000002];

int prime[300000];

int np;

void sieve()
{

    int i,j;



    np=1;

    prime[np]=2;

    int limit=sqrt(1000000);


    mark[2]=1;

    for(i=4; i<=1000000; i=i+2)
    {

        mark[i]=0;
    }

    for(i=3; i<=1000000; i=i+2)
    {

        mark[i]=1;
    }

    for(i=3; i<=limit; i=i+2)
    {

        if(mark[i]==1)
        {

            for(j=i*i; j<=1000000; j=j+(2*i))
            {

                mark[j]=0;
            }
        }
    }

    for(i=3; i<=1000000; i=i+2)
    {

        if(mark[i]==1)
        {

            np=np+1;


            prime[np]=i;
        }
    }

}

bool isprime(int p)
{

    int fl=0;

    for(int t=2; t<=sqrt(p); t++)
    {

        if(p%t==0)
        {
            fl=1;

            break;


        }

    }

    if(fl==1)
    {

        return false;
    }

    else

        return true;



}


int main()
{

    sieve();

    int n,k,l,c=0;

    int i;

    while(true)
    {

        cin >>n;

        if (n==0)
        {

            break;
        }

        else
        {

            k=n/2;

            for(i=1; prime[i]<=k; i++)
            {

                l=n-prime[i];

                if(isprime(l)==true)
                {

                    c++;


                }


            }

             cout << c << endl;

                c=0;


        }

    }

    return 0;


}
