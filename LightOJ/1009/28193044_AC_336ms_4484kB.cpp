#include<bits/stdc++.h>

using namespace std;

vector<int> v[20009];

int vis[20009];

int bfs()
{
    queue<int> q;

    int i;

    int black,white,x,y,ans=0;

    memset(vis,0,sizeof(vis));

    for(i=1; i<=20000; i++)
    {

        black=0;

        white=0;

        if(vis[i]==0 && v[i].empty()!=true)
        {
            vis[i]=1;

            white++;

            q.push(i);

            while(q.empty()!=true)
            {
                y=q.front();

                q.pop();

                for(i=0; i<v[y].size(); i++)
                {
                    x=v[y][i];

                    if(vis[x]==0)
                    {
                        q.push(x);

                        if(vis[y]==1)
                        {
                            vis[x]=2;

                            black++;
                        }
                        else
                        {
                            vis[x]=1;

                            white++;
                        }
                    }
                }

            }
        }

        ans=ans+max(black,white); // different components
    }

    return ans;
}

int main()
{
    int t;

    cin >> t;

    int ts=0,n,k,i,u,z;

    while(t--)
    {
        cin >> n;

        while(n--)
        {
            cin >> u >> z;

            v[z].push_back(u);
            v[u].push_back(z);

        }

        ts++;

        k=bfs();

        printf("Case %d: %d\n",ts,k);

        for(i=1;i<=20000;i++)
        {
            v[i].clear();
        }
    }
    return 0;

}
