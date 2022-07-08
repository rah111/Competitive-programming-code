#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;

    cin >> st;

    int k;

    k=st.size();

    int a[k+5]={0};

    int i;

    for(i=1;i<k;i++)
    {
        if(st[i]==st[i-1])
        {
            a[i]=1;
        }
    }

    for(i=1;i<k;i++)
    {
        a[i]=a[i]+a[i-1];
    }



    int m,l,r;

    cin >> m;

    while(m--)
    {
        cin >> l >> r;

        cout << a[r-1]-a[l-1] << endl;
    }
    return 0;
}
