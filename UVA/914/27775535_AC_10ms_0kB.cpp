#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long
#define N 1000000
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
    io;

    SieveOfEratosthenes();

    int t;

    cin >> t;

    int l,u;

    map<int,int> p;

    map<int,int>::iterator kt;

    int i,mx,cnt,res,diff;

    while(t--)
    {
        cin >> l >> u;

        auto it=upper_bound(primes.begin(),primes.end(),l)-primes.begin();

        auto pt=lower_bound(primes.begin(),primes.end(),u)-primes.begin();

        if(primecheck(l)==true)
        {
            it=it-1;
        }

        if(primecheck(u)!=true)
        {
            pt=pt-1;
        }

        //cout << it << " " << primes[it] << " " << pt << " " << primes[pt] << endl;

        for(i=it+1;i<=pt;i++)
        {
            diff=primes[i]-primes[i-1];



            p[diff]++;
        }

        mx=0;

        for(kt=p.begin();kt!=p.end();kt++)
        {

            if(mx<kt->second)
            {
                mx=kt->second;
            }


        }

        cnt=0;

        for(kt=p.begin();kt!=p.end();kt++)
        {
            if(kt->second==mx)
            {
                cnt++;

                res=kt->first;
            }
        }



        if(cnt>1 || mx==0)
        {
            cout << "No jumping champion\n";
        }
        else
        {
            cout << "The jumping champion is " << res << endl;
        }

        p.clear();


    }


    return 0;
}
