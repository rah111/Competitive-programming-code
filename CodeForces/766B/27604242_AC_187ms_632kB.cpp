#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int i,j,target,l,mid,r;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            target=a[i]+a[j];

            l=j+1, r=n-1 ;

            while(l<=r)
            {
                mid=l+((r-l)/2);

                if(a[mid]<target)
                {
                    cout << "YES" << endl;

                    return 0;
                }
                else if(a[mid]>=target)
                {
                    r=mid-1;
                }
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}
