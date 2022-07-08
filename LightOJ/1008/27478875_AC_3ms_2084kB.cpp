#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int test,tr=0;

    cin >> test;

    ll n,a,b,row,col;

    while(test--)
    {
        cin >> n;

        a=ceil(sqrt(n));

        b=(a*a)-n;

        row=0;

        col=0;

        if(b<a)
        {
            row=b+1;

            col=a;
        }
        else
        {
            row=a;

            col=n-(a-1)*(a-1);
        }

        if(a%2==0)
        {
            swap(row,col);
        }

        tr++;

        printf("Case %d: %ld %ld\n",tr,row,col);
    }
    return 0;
}
