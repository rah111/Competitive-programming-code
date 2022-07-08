#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

using namespace std;

const int N=100000;


int main()
{
    io;

    int a[N+5]={0};

    int len=sqrt(N);

    int i;

    for(i=1;i<=len;i++)
    {
        a[i*i]=1;

    }

    for(i=2;i<=N;i++)
    {
        a[i]=a[i]+a[i-1];
    }

    int c , b;

    while(true)
    {
        cin >> c >> b;

        if(c==0 && b==0)
        {
            break;
        }
        else
        {
            if(c==1)
            {
                cout << a[b] << endl;
            }
            else
            {
                cout << a[b]-a[c-1] << endl;
            }
        }
    }



    return 0;
}
