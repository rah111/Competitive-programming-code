#include<bits/stdc++.h>



#define ll long long
#define N 100000
using namespace std;


bool primesTable[100009];



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



int main()
{
    SieveOfEratosthenes();

    ll n;

    while(true)
    {
        cin >> n;

        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            cout << n << " = " <<  1 << endl;
        }
        else
        {


            if(n<0)
            {
                if(n==-1)
                {
                    cout << n << " = " <<  -1 ;
                }
                else
                {
                    cout << n << " = " <<  -1 << " x " ;

                    n=abs(n);
                }


            }
            else
            {
                cout <<  n << " = " ;
            }

            int i;

            int len=(int) sqrt(n);

            for(i=0;primes[i]<=len;i++)
            {

                if(n%primes[i]==0)
                {
                    while(n%primes[i]==0)
                    {


                        n=n/primes[i];

                        if(n==1)
                        {
                            cout << primes[i] ;
                        }
                        else
                        {
                             cout << primes[i] << " x ";
                        }


                    }
                }

                int len=(int) sqrt(n);
            }



                if(n>1)
                {
                    cout << n << endl;
                }
                else
                {
                    cout << "\n";
                }


        }
    }

    return 0;
}
