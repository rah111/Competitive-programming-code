#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  n,i,p,k=1;

    cin >> n;



    p=sqrt(n);

    if(n%2==0)
    {
        k=k*2;

        while(n%2==0)
        {
            n=n/2;
        }
    }

    for(i=3;i<=p;i=i+2)
    {
        if(n%i==0)
        {
            k=k*i;

            while(n%i==0)
            {
                n=n/i;
            }


        }


    }

    cout << k*n << endl;


    return 0;
}