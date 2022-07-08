#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;

    cin >> n >> k;

    int a[k+1]={0};

    string st;

    cin >> st;

    int i,p;

    for(i=0;i<st.size();i++)
    {
        p=(int)st[i]-64;

        if(p<=k)
        {
            a[p]++;
        }
    }

    sort(a+1,a+k+1);

    cout << a[1]*k << endl;

    return 0;
}
