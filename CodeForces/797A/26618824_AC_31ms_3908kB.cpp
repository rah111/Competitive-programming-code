#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long
#define N 100000
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
    io;

    SieveOfEratosthenes();

    int input,k,i;

    cin >> input >> k;

    int cnt=0,len,d=1,n;



    vector<int> factor;

    n=input;

    len=sqrt(n);

    for(i=0; primes[i]<=len; i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n=n/primes[i];

                factor.push_back(primes[i]);

                cnt++;
            }

            len=sqrt(n);
        }

    }

    if(n!=1)
    {
        cnt++;

        factor.push_back(n);
    }

    

    if(cnt>=k)
    {
        for(i=0; i<k-1; i++)
    {
        cout << factor[i] << " ";

        d=d*factor[i];
    }

    cout << input/d ;
    }
    else
    {
        cout << -1 << endl;
    }



    return 0;
}
