#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long int
#define N 10000000
using namespace std;


bool primesTable[N+9];

int ap[N+9];

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

void solve(int n)
{
    int i,len;

    len=sqrt(n);

    for(i=0;i<primes.size();i++)
    {
        if(primes[i]>len)
        {
            break;
        }
        else
        {
            if(n%primes[i]==0)
            {
                ap[primes[i]]++;

                while(n%primes[i]==0)
                {
                    n=n/primes[i];
                }

                len=sqrt(n);
            }

        }
    }

    if(n!=1)
    {
        ap[n]++;
    }
}



int main()
{
    io;
    
    SieveOfEratosthenes();

    memset(ap,0,sizeof(ap));

    int n;

    cin >> n;

    int k;

    while(n--)
    {
        cin >> k;

        solve(k);
    }

    int i;

    for(i=2;i<=N;i++)
    {
        ap[i]=ap[i]+ap[i-1];
    }

    int m;

    cin >> m;

    ll l,r;

    while(m--)
    {
        cin >> l >> r;
        
        if(l>N && r > N)
        {
            cout << 0 << endl;
        }
        

        else if(r>N)
        {
            cout << ap[N]-ap[l-1] << endl;
        }

        else
        {
            cout << ap[r]-ap[l-1] << endl;
        }
    }

    return 0;

}
