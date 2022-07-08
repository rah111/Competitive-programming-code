#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long
#define N 100000
#define p 10000000
using namespace std;


bool primesTable[N+9];

vector <int> primes;

int cnt[p+5];

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

bool primeFactor(int n)
{
    int len=sqrt(n);

    int i;

    for(i=0;primes[i]<=len;i++)
    {
        if(n%primes[i]==0)
        {
            cnt[primes[i]]++;

            while(n%primes[i]==0)
            {
                n=n/primes[i];
            }

            len=sqrt(n);
        }
    }

    if(n!=1)
        cnt[n]++;
}

int main()
{
     io;

    SieveOfEratosthenes();

    memset(cnt,0,sizeof cnt);

    int n,k,i;

    cin >> n;


    for(int i=0;i<n;i++)
    {
        cin >> k;

        primeFactor(k);
    }

    for(i=1;i<=p;i++)
    {
        cnt[i]=cnt[i-1]+cnt[i];
    }

    int m;

    cin >> m;

    int l,r,minl,minr;

    while(m--)
    {
        cin >> l >> r;

        minl=min(l,p);

        minr=min(r,p);

        cout << cnt[minr]-cnt[minl-1] << endl;

    }
    return 0;
}
