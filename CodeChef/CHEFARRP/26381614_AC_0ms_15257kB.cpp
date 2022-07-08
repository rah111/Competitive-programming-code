#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int test;

    cin >> test;

    int i,n;

    ll product,cnt;

    int cntp,j,k;

    while(test--)
    {
        cin >> n;

        ll a[n];

        cntp=0;



        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for (int i=0; i <n; i++)
        {

            for (int j=i; j<n; j++)
            {
                product=1;

                cnt=0;

                for (int k=i; k<=j; k++)

                {
                    cnt=cnt+a[k];

                    product=product*a[k];

                }

                if(cnt==product)
                {
                    cntp++;
                }

            }


        }

        cout << cntp << endl;
    }

    return 0;
}
