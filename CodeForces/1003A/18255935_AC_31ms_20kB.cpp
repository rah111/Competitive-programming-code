#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=1,m=1;

    cin >> n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    for(int j=1;j<n;j++)
    {
        if(a[j-1]==a[j])
        {
            c++;
        }

        if(a[j-1]!=a[j])
        {
            if(m<c)
            {
                m=c;
            }
            c=1;
        }
    }

    if(m>c)
    {
        cout << m << endl;

    }

    else
        cout << c << endl;

    return 0;
}
