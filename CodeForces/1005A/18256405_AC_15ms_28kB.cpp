#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;

    cin >> n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];

        if(a[i]==1)
        {
            c++;
        }
    }

    cout << c << endl;

    for(int j=1;j<n;j++)
    {
        if(a[j]==1)
        {
            cout << a[j-1] <<" ";
        }
    }

    cout << a[n-1] <<endl;
    return 0;
}
