#include <bits/stdc++.h>

using namespace std;

int vis[10009];

vector <int> v[10009];

int cnt=0;

void dfs(int x)
{
    vis[x]=1;

    cnt++;

    int i,y;

    for(i=0;i<v[x].size();i++)
    {
        y=v[x][i];

        if(vis[y]==0)
        {
            dfs(y);
        }
    }
}

int main()
{
    int t;

    cin >> t;

    int n,m,l,x,y,z,i;

    while(t--)
    {
        cin >> n >> m >> l;

        while(m--)
        {
            cin >> x >> y;

            v[x].push_back(y);
        }

        memset(vis,0,sizeof(vis));

        while(l--)
        {
            cin >> z;
            
            if(vis[z]==0)
            {
                dfs(z);
            }

        }

        cout << cnt << endl;

        for(i=1;i<=n;i++)
        {
            v[i].clear();
        }

        cnt=0;
    }

    return 0;
}
