#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;

    cin >> n;

    int a[n],j[n];

    for( i=1;i<=n;i++)
    {
        cin >> a[i];

        k=a[i];

        j[k]=i;
    }


        for(int i=1;i<=n;i++)
        {
            cout << j[i] << " ";
        }



    return 0;
}
