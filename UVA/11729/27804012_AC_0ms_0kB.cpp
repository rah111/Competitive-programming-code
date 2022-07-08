#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    vector<pair<int,int>> v;

    int n,i,ts=0;

    ll work_time,brief_time,bri,temp,tot;

    while(true)
    {
        scanf("%d",&n);
        
        if(n==0)
        {
            break;
        }

        while(n--)
        {
            scanf("%d %d",&brief_time,&work_time);

            v.push_back(make_pair(work_time,brief_time));
        }

        sort(v.begin(),v.end());

        tot=0;

        bri=0;

        for(i=v.size()-1;i>=0;i--)
        {
            bri=bri+(ll)v[i].second;

            temp=bri+(ll)v[i].first;

            tot=max(tot,temp);
        }

        ts++;

        printf("Case %d: %ld\n",ts,tot);

        v.clear();
    }

    return 0;
}
