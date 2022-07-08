#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long int
#define N 10000000
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

bool primecheck(int n)
{
    if(n==1 || n==0)
    {
        return false;
    }

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

int main()
{
    SieveOfEratosthenes();

    ll n,len,cnt,res,i;

    while(true)
    {
        cin >> n;

        if(n==0)
        {
            break;
        }

        if(n<0)
        {
            n=n*(-1);
        }


            len=sqrt(n);

            cnt=0;

            res=0;

            for(i=0;primes[i]<=len;i++)
            {
                if(n%primes[i]==0)
                {
                    cnt++;

                    res=max(res,(ll)primes[i]);

                    while(n%primes[i]==0)
                    {
                        n=n/primes[i];
                    }

                    len=sqrt(n);
                }
            }

            if(n!=1)
            {
                res=max(res,(ll)n);

                cnt++;
            }

            if(cnt>1)
            {
                cout << res << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    return 0;


}
