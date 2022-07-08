#include <bits/stdc++.h>



#define ll long long int

using namespace std;


const int N=(int)1e6;


bool primesTable[N+1];

vector <int> primes;


void SieveOfEratosthenes()
{

    int i,k;

    for(i=4; i <= N; i=i+2)
    {

        primesTable[i] = 0;
    }

    for(i=3; i<=N; i=i+2)
    {
        primesTable[i]=1;
    }

    primesTable[1] = 0;
    primesTable[2] = 1;

    int len = sqrt(N);

    for(i = 3; i <= len; i=i+2)
    {

        if(primesTable[i]==1)
        {
            // if i is an odd number , then 2*i is an even number and i*i is an odd number
            // then adding an odd number with an even number results into odd number
            // here our purpose is to make odd indexes false(0) only. because we already took care
            // of even indexes


            for( k = i * i; k <= N; k = k+(2*i) )
            {

                primesTable[k] = 0;
            }
        }
    }

    primes.push_back(2);

    for(i=3; i<=N; i=i+2)
    {
        if(primesTable[i]==1)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    SieveOfEratosthenes();

    int m,n,q;

    while(scanf("%d%d",&n,&m)==2)
    {
        if(m==0)
        {
            printf("0 does not divide %d!\n",n);

        }
        else if(n < 2)
        {
            if(m!=1)
                printf("%d does not divide %d!\n",m,n);
            else
                printf("1 divides %d!\n",n);

        }
        else if(m==1)
        {
            printf("1 divides %d!\n",n);

        }
        else
        {


            vector <int> num;
            vector <int> cnt;

            int i,c;

            q=m;

            int len=(int) sqrt(m);

            for(i=0; primes[i]<=len; i++)
            {
                if(m%primes[i]==0)
                {
                    c=0;

                    while(m%primes[i]==0)
                    {
                        c++;

                        m=m/primes[i];
                    }

                    cnt.push_back(c);

                    num.push_back(primes[i]);

                    int len=(int) sqrt(m);
                }
            }

            if(m!=1)
            {
                cnt.push_back(1);

                num.push_back(m);
            }


            bool flag=0;

            int d;

            ll k;

            for(i=0; i<num.size(); i++)
            {
                d=0;

                k=n;

                while(d<cnt[i] && num[i]<=k)
                {
                    d=d+(k/num[i]);

                    k=k/num[i];
                }



                if(d<cnt[i])
                {
                    flag=1;
                    break;
                }
            }

            if(flag==1)
            {
                printf("%d does not divide %d!\n",q,n);
            }

            else
                printf("%d divides %d!\n",q,n);


        }

    }
    return 0;
}
