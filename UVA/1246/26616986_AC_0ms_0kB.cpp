#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long
#define N 10000
using namespace std;


bool primesTable[N+9];

int NOD[N+9];

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



    for(i=0;primes[i]<=len;i++)
    {
        if(n%primes[i]==0)
        {
            return false;
        }
    }

    if(n==1)
    {
        return false;
    }


        return true;
}

void generateNOD() { // O(NlogN)
   for(int i = 1; i <= N; i++) {
       for(int j = i; j <= N; j += i) {
           NOD[j] += 1;
       }
   }
}



int main()
{
    SieveOfEratosthenes();

    memset(NOD,0,sizeof(NOD));

    generateNOD();

    int t,k,cnt,l,h,i;

    cin >> t;

    while(t--)
    {
        cin >> l >> h;

        cnt=0;

        for(i=l;i<=h;i++)
        {
            k=NOD[i];

            if(primecheck(k)==true)
            {
                if(cnt>0)
                {
                    cout <<" " << i ;
                }
                else
                {
                    cout << i ;
                }

                cnt++;
            }


        }

        if(cnt==0)
        {
            cout<< -1 << "\n";
        }
        else
        {
            cout << "\n";
        }
    }



    return 0;
}
