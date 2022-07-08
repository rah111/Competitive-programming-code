#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int i,e=0,o=0,l,p;

    for(i=1;i<=n;i++)
    {
        cin >> a[i];

        if(a[i]%2==0)
        {
            e++;

            l=i;
        }
        else
        {
            o++;

            p=i;
        }
    }

    if(e==1)
    {
        cout << l << endl;
    }
    else
    {
        cout << p << endl;
    }

    return 0;
}
