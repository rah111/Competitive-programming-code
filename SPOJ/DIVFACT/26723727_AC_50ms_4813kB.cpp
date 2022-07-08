#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long
#define N 50000
using namespace std;

const ll e=1000000007;


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
    io;

    SieveOfEratosthenes();

    int test;

    cin >> test;

    int n;

    ll res,p,t;

    int i;

    while(test--)
    {
        cin >> n;

        res=1;

        for(i=0;i<primes.size() && primes[i]<=n;i++)
        {
           t=primes[i];



           p=0;

           while(n/t!=0)
           {
               p=p+(n/t);

               t=t*primes[i];
           }

           p++;

           res=((res%e)*(p%e))%e;

        }


        cout << res << endl;
    }
    return 0;
}
