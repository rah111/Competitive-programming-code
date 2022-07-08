
#include<bits/stdc++.h>

using namespace std;

int main()
{


    int n,i,j,l,r,mid,ans,p,t=0,target;

    vector<int> v;

    while(true)
    {
        cin >> n;

        if(n==0)
        {
            break;
        }



        for(i=1;i<=n;i++)
        {
            cin >> j;

            v.push_back(j);
        }

        sort(v.begin(),v.end());

        ans=0;

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                p=v[i]+v[j]+1;

                target=lower_bound(v.begin(),v.end(),p)-v.begin();

                

                ans=ans+(n-target);
            }
        }



        printf("%d\n",ans);

        v.clear();
    }
    return 0;
}
