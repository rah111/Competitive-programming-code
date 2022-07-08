#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long int
#define N 1000000
using namespace std;


bool primesTable[N+9];

vector <int> primes;

int ap[N+9];
int ap2[N+9][15];

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

/*bool primecheck(int n)
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
}*/

void solve()
{
    int i,p,k;

    for(i=0;i<primes.size();i++)
    {
        p=primes[i];

        k=primes[i];

        while(p<=N)
        {
            ap[p]++;

            p=p+k;
        }


    }


}



int main()
{
    io;

    SieveOfEratosthenes();

    memset(ap,0,sizeof(ap));

    memset(ap2,0,sizeof(ap2));

    solve();

    int i,k,j;



    for(i=1;i<=N;i++)
    {
        k=ap[i];

        if(k<=10)
        {
            ap2[i][k]=1;

        }


    }

    for(i=0;i<=10;i++)
    {
        for(j=1;j<=N;j++)
        {
            ap2[j][i]=ap2[j-1][i]+ap2[j][i];
        }
    }

    int m,a,b,n;

    cin >> m;

    while(m--)
    {
        cin >> a >> b >> n;

        cout << ap2[b][n]-ap2[a-1][n] << endl;
    }



    return 0;

}

