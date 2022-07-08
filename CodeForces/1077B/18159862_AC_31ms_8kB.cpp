#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int i,j=0;

    for( i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    for(i=1;i<=n-1;i++)
    {
        if(a[i]==0 && a[i-1]==1 && a[i+1]==1)
        {
            j++;

            if(i>=(n-3))
               {
                   break;
               }
            else
                {
                    i=i+2;

                }


        }
    }

    cout << j <<  endl;


    return 0;
}
