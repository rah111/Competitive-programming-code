#include<bits/stdc++.h>
 
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
#define ll long long
 
using namespace std;
 
 
 
int main()
{
    io;
 
    int test;
 
    cin >> test;
 
 
 
    ll res,t;
 
    int n , p,i;
 
    while(test--)
    {
        cin >> n;
 
        int a[1000006]={0};
 
        res=0;
 
        for(i=0;i<n;i++)
        {
            cin >> p;
 
            a[p]++;
        }
 
        for(i=1;i<=1000000;i++)
        {
            if(a[i]!=0)
            {
                t=a[i];
 
                res=res+(t*(t-1));
            }
        }
 
        cout << res << endl;
    }
 
 
    return 0;
}