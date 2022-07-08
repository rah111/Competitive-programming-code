#include<bits/stdc++.h>

using namespace std;

int cnt[1009];

vector <int> v[1009];

bool visited[1009];

void dfs(int x)
{
    int i,y;

    cnt[x]=cnt[x]+1;

    visited[x]=1;

    for(i=0;i<v[x].size();i++)
    {
        y=v[x][i];

        if(visited[y]==0)
        {
            dfs(y);
        }
    }
}

int main()
{
    int t;

    cin >> t;

    vector <int> per;

    int n,k,m,p,x,y,ts,res,i;

    while(t--)
    {
        cin >> k >> n >> m;

        for(i=1;i<=k;i++)
        {
            cin >> p;

            per.push_back(p);
        }

        for(i=1;i<=m;i++)
        {
            cin >> x >> y;

            v[x].push_back(y);
        }

        memset(cnt,0,sizeof(cnt));

        for(i=0;i<per.size();i++)
        {
            memset(visited,0,sizeof(visited));

            dfs(per[i]);
        }

        res=0;

        for(i=1;i<=n;i++)
        {
            if(cnt[i]>=k)
            {
                res++;
            }
        }

        ts++;

        printf("Case %d: %d\n",ts,res);

        for(i=1;i<=n;i++)
        {
            v[i].clear();

        }

        per.clear();
    }

    return 0;
}
