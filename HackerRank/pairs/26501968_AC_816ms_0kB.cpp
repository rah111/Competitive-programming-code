#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

using namespace std;

const int N=100000;

ll p[N+5];

bool binarySearch(int n,int b)
{
    int first,last,middle;

    first=0;
    last=n-1;

    while(first<=last)
    {
        middle=(first+(last-first)/2);

        if(p[middle]==b)
        {
            return 0;
        }
        else if(p[middle]<b)
        {
            first=middle+1;
        }
        else
        {
            last=middle-1;
        }
    }

    return 1;
}

int main()
{
    int n,k;

    cin >> n >> k;

    int i,cnt=0,m;

    for(i=0;i<n;i++)
    {
        cin >> p[i];
    }

    sort(p,p+n);



    for(i=0;i<n;i++)
    {
        m=p[i]+k;

        if(binarySearch(n,m)==0)
        {
            cnt++;
        }

    }

    cout << cnt << endl;

    return 0;
}
