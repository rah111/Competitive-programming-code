#include<bits/stdc++.h>

using namespace std;

#define ll long long int

using namespace std;

const int N=(int)4e7;


bool primesTable[N+1];

vector <int> primes;
vector <ll> p,t;

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



void factorize(ll n)
{
    ll i;

    ll len=sqrt(n);

    int cnt;

    for(i=0; primes[i]<=len; i++)
    {
        if(n%primes[i]==0)
        {
            cnt=0;

            while(n%primes[i]==0)
            {
                n=n/primes[i];

                cnt++;
            }

            t.push_back(primes[i]);
            p.push_back(cnt);
        }

        len = sqrt(n);
    }

    if(n>1)
    {
        t.push_back(n);
        p.push_back(1);
    }
}

int main()
{


    SieveOfEratosthenes();



    //The memset() can be uses to set all values to 0 or -1.
    //But we cannot use some other values, because memset() works byte by byte.

    int i;

    ll x;

    while(true)
    {
        cin >> x;

        if(x==0)
        {
            break;
        }

        else

        {


            p.clear();
            t.clear();

            factorize(x);

            for(i=0; i<p.size(); i++)
            {
                cout << t[i] << "^" << p[i] ;

                if(i!=(p.size()-1))
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }


    }


    return 0;
}
