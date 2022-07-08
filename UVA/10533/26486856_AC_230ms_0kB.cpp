#include<bits/stdc++.h>

#define ll long long


using namespace std;

const int N=1000000;

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

bool primecheck(int n)
{
    int len=sqrt(n);

    int i;

    bool pl=0;

    for(i=0;primes[i]<=len;i++)
    {
        if(n%primes[i]==0)
        {
            pl=1;
            break;
        }
    }

    if(pl==1)
        return false;
    else
        return true;
}

int sumOfDigits(int n)
{
    int p=0,c;

    while(n!=0)
    {
        c=n%10;

        p=p+c;

        n=n/10;
    }

    return p;
}

int main()
{


    SieveOfEratosthenes();

    int p[N+9]={0};

    int d,i;

    for(i=0;i<primes.size();i++)
    {
        d=sumOfDigits(primes[i]);

        if(primecheck(d)==1)
        {
            p[primes[i]]=1;
        }
    }

    for(i=0;i<=N;i++)
    {
        p[i]=p[i]+p[i-1];
    }

    int test;

    scanf("%d",& test);

    int t1,t2;

    while(test--)
    {
        scanf("%d%d",&t1,&t2);

        if(t1==0)
        {
            printf("%d\n",p[t2]);
        }
        else
        {
            printf("%d\n",p[t2]-p[t1-1]);
        }


    }


    return 0;

}
