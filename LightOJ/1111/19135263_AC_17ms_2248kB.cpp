
#include <bits/stdc++.h>

using namespace std;

int cnt[1009];
int visited[1009];
vector<int> q[1009];

void dfs(int x)
{
    visited[x]=1;

    cnt[x]=cnt[x]+1;



    int i,k;

    for(i=0; i<q[x].size(); i++)
    {
        k=q[x][i];

        if(visited[k]==0)
        {


            dfs(k);


        }
    }


}

int main()
{
    int testcase;



    int i,k,n,m,u,v,c,z=0;

    cin >> testcase;

    while(testcase--)
    {
        cin >> k >> n >> m;

        c=0;

        z++;

        int st[k];



        for(i=1; i<=k; i++)
        {
            cin >> st[i];

        }

        for(i=1;i<=m;i++)
        {
            cin >> u >> v;



            q[u].push_back(v);


        }


        memset(cnt,0,sizeof(cnt));

        for(i=1;i<=k;i++)
        {
             memset(visited,0,sizeof(visited));// this is important
                                               // every time dfs runs, memset is clearing it's previous data
                                               
            dfs(st[i]);
        }

        for(i=1;i<=n;i++)
        {
            if(cnt[i]==k)
            {
                c++;
            }
        }

        cout << "Case " << z << ": " << c << endl;

        for(i=1;i<=n;i++)
        {
            q[i].clear();
        }
    }


    return 0;
}
