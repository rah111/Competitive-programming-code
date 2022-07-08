
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int n,i,j,l,r,mid,ans,p,t=0,target;

    vector<int> v;

    while(test--)
    {
        cin >> n;



        for(i=1;i<=n;i++)
        {
            cin >> j;

            v.push_back(j);
        }

        sort(v.begin(),v.end());

        ans=0;

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                p=v[i]+v[j]-1;

                target=upper_bound(v.begin(),v.end(),p)-v.begin()-1;

                ans=ans+(target -j);
            }
        }

        t++;

        printf("Case %d: %d\n",t,ans);

        v.clear();
    }
    return 0;
}
