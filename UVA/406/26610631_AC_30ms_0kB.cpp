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

    primes.push_back(1);

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

    int n,c,t,i,k;

    while(cin >> n >> c)
    {
        t=0;

        for(i=0;primes[i]<=n;i++)
        {
            t++;
        }

        if(t%2==0)
        {
            k=c*2;

            if(k>=t)
            {
                cout << n << " " <<  c << ":";

                for(i=0;i<t;i++)
                {
                    cout <<" " << primes[i];
                }

                cout << "\n\n";
            }
            else
            {
                i=(t-k)/2;

                cout << n << " " <<  c << ":";

                while(k--)
                {
                    cout <<" " << primes[i];

                    i++;
                }

                cout << "\n\n";
            }

        }
        else
        {
             k=(c*2)-1;

            if(k>=t)
            {
                cout << n << " " <<  c << ":";

                for(i=0;i<t;i++)
                {
                    cout <<" " << primes[i];
                }

                cout << "\n\n";
            }
            else
            {
                i=(t-k)/2;

                cout << n << " " <<  c << ":";

                while(k--)
                {
                    cout <<" " << primes[i] ;

                    i++;
                }

                cout << "\n\n";
            }

        }

    }
    return 0;
}
