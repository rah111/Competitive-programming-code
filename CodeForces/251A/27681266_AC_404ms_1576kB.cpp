#include<bits/stdc++.h>

using namespace std;

int main()
{


        long long int n,i,j,l,r,mid,p,target,ans,d;



        vector<long long int> v;

        cin >> n >> d;

        for(i=1;i<=n;i++)
        {
            cin >> j;

            v.push_back(j);
        }


        ans=0;

        for(i=0;i<n-1;i++)
        {
                p=v[i]+d;

                target=upper_bound(v.begin()+i,v.end(),p)-v.begin()-1;

                target=target-i;

                ans=ans+(target*(target-1)/2);

        }



        printf("%lld\n",ans);

        v.clear();

    return 0;
}

