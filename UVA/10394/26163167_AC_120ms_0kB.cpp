#include<bits/stdc++.h>

using namespace std;

bool prime[20000009];
int twinPrime[20000009];
int n=20000000;

void sieve()
{
    int i,j;

    int sqrtn=sqrt(n);

    prime[2]=true;

    // 1 is not a prime number
    // 2 is the only even number which is prime

    for(i=4;i<=n;i=i+2)
    {
        prime[i]=false;
    }

    for(i=3;i<=n;i=i+2)
    {
        prime[i]=true;
    }



    for(i=3;i<=sqrtn;i=i+2)
    {
        if(prime[i]==true)
        {
            for(j=i*i;j<=n;j=j+(2*i))
            {
                prime[j]=false;
            }
        }

    }
}

void twinPrimeNumbers()
{
    int j=1;

    int i;

    for(i=3;i<=n;i=i+2)
    {
        if(prime[i]==true && prime[i+2]==true)
        {
            twinPrime[j++]=i;
        }
    }


}

int main()
{
    sieve();

    twinPrimeNumbers();

    int x;

    while(cin >> x)
    {
        cout << "(" << twinPrime[x] << "," << " " << twinPrime[x]+2 << ")" << endl;
    }

    return 0;
}
