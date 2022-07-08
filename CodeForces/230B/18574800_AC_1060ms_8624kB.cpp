#include <bits/stdc++.h>


using namespace std;

const int q=1000000;

int r[q];

int mark[q];


void sieve()
{
    int i,d=1;

    r[2]=1;

    for(i=4;i<=q;i++)
    {
        r[i]=0;
    }

    for(i=3;i<=q;i=i+2)
    {
        r[i]=1;
    }

    for(i=3;i<=sqrt(q);i=i+2)
    {
        if(r[i]==1)
        {
            for(int j=i*i;j<=q;j=j+(2*i))
            {
                r[j]=0;
            }
        }
    }

     mark[1]=2;

    for(i=2;i<=q;i++)
    {
        if(r[i]==1)
        {
            d++;
            mark[d]=i;
        }
    }

}

bool isprime(long long x)
{
    int j=0;

    for(int i=1; mark[i]<=sqrt(x); i++)
    {
        if(x%mark[i]==0)
        {
            j=1;

            return false;

        }
    }

    if(j==0)

        return true;
}


int main()
{
    sieve();

    int n;

    cin >> n;

    long long a[100010];

    long long k;

    int i,j;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            cout << "NO" <<endl;

        }

        else
        {
            k=sqrt(a[i]);

            if(a[i]%k==0 && a[i]/k==k)
            {
                if(isprime(k)==true)
                {
                    cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;
            }

            else

                cout << "NO" << endl;

        }

    }
    return 0;
}