#include<bits/stdc++.h>

#define ll long long int

using namespace std;


const int N=(int)1e6;


bool primesTable[N+1];

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

    int test;

    cin >> test;

    ll p;

    int i;

    stack<int> q;

    bool flag;

    while(test--)
    {
        cin >> p;

        if(p<10)
        {
            cout << p << endl;
        }
        else
        {

            flag=0;

            for(i=9; i>=2; i--)
            {
                if(p%i==0)
                {
                    flag=1;

                    while(p%i==0)
                    {
                        p=p/i;

                        q.push(i);
                    }
                }
            }

            if(flag==1 && p==1)
            {
                while(!q.empty())
                {
                    cout << q.top();

                    q.pop();
                }

                cout << endl;
            }
            else
            {
                cout << -1 << endl;

                while(!q.empty())
                {
                    q.pop();
                }

            }
        }
    }



    return 0;
}
