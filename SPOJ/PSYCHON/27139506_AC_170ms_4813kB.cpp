#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long
#define N 10000
using namespace std;


bool primesTable[N+9];

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

    int t;

    scanf("%d",&t);

    int n,cnt,cnt1,cnt2,p,i;

    while(t--)
    {
        scanf("%d",&n);

        if(n==0 || n==1)
        {
            printf("Ordinary Number\n");


        }
        else
        {
            p=sqrt(n);

            cnt1=0;
            cnt2=0;

            for(i=0;i<=p;i++)
            {
                if(n%primes[i]==0)
                {
                    cnt=0;

                    while(n%primes[i]==0)
                    {
                        n=n/primes[i];

                        cnt++;
                    }

                    if(cnt%2==0)
                    {
                        cnt1++;
                    }
                    else
                    {
                        cnt2++;
                    }

                    p=sqrt(n);
                }
            }

            if(n>1)
            {
                cnt2++;
            }

            if(cnt1>cnt2)
            {
                printf("Psycho Number\n");
            }
            else
            {
                printf("Ordinary Number\n");
            }
            }
        }


    return 0;
}
