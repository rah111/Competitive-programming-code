#include<bits/stdc++.h>

using namespace std;

bool vis[1009];

vector<int> v[1009];

int level[1009];

void bfs(int start)
{
    vis[start]=1;

    int l=0,i,x,y;

    level[start]=l;

    queue<int> q;

    q.push(start);

    while(!q.empty())
    {
        x=q.front();

        q.pop();

        

        for(i=0;i<v[x].size();i++)
        {
            y=v[x][i];

            if(vis[y]==0)
            {
                vis[y]=1;

                q.push(y);

                level[y]=level[x]+6;
            }
        }
    }


}

int main()
{
    int q;

    cin >> q;

    int n,m,u,w,s,i;

    while(q--)
    {
        cin >> n >> m;

        while(m--)
        {
            cin >> u >> w;

            v[u].push_back(w);
            v[w].push_back(u);
        }

        memset(vis,0,sizeof(vis));

        memset(level,0,sizeof(level));

        cin >> s;

        bfs(s);

        for(i=1;i<=n;i++)
        {
            if(i!=s)
            {
                if(level[i]==0)
                {
                    cout << "-1" << " ";
                }
                else

                cout << level[i] << " " ;
            }
        }

        cout << endl;

        for(i=1;i<=n;i++)
        {
            v[i].clear();
        }
    }



    return 0;
}
