#include <bits/stdc++.h>

using namespace std;

vector <int> v[100005];

int vis[100005];

long long int price[100005];

long long int pri=1000000010;

void dfs(int x,long long int t)
{
    vis[x]=1;

    if(t<pri)
    {
        pri=t;
    }

    int y;

    for(int i=0;i<v[x].size();i++)
    {
        y=v[x][i];

        if(vis[y]==0)
        {
            dfs(y,price[y]);
        }
    }
}

int main()
{
    memset(vis,0,sizeof(vis));

    int n,rel;

    int p,q,i;

    long long int k,res=0;

    cin >> n >> rel;

    if(rel==0)
    {
        for(i=0;i<n;i++)
        {
            cin >> k;

            res=res+k;
        }

        cout << res << endl;
    }

    else
    {


        for(i=1;i<=n;i++)
        {
            cin >> price[i];
        }

        for(i=1;i<=rel;i++)
        {
            cin >> p >> q;

            v[p].push_back(q);
            v[q].push_back(p);
        }

        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                if(v[i].size()==0)
                {
                    res=res+price[i];
                }

                else
                {
                    dfs(i,price[i]);

                    res=res+pri;

                    pri=1000000010;
                }
            }
        }

        cout << res <<endl;
    }

    return 0;
}
