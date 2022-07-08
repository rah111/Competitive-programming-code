#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int i;

    for(i=1;i<=n;i++)
    {
        cin >> a[i];

        while(a[i]%3==0)
        {

                a[i]=a[i]/3;

        }

        while(a[i]%2==0)
        {
            a[i]=a[i]/2;
        }
    }

    bool flg=0;



    for(i=2;i<=n;i++)
    {
        if(a[i]!=a[i-1])
        {
            flg=1;

            break;
        }
    }

    if(flg==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
