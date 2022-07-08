#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,k,c=0;


    cin >> n >> k;

    int a[n];

    for( i=0; i<n; i++)
    {
        cin >> a[i];


    }

    for( j=0; j<n-1; j++)
    {
        for(i=j+1; i<n; i++)
        {

            if((a[i]+a[j])%k==0)
            {
                c++;
            }

        }
    }

    cout << c << endl;

    return 0;
}