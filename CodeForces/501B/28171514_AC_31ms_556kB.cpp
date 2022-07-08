#include<bits/stdc++.h>

using namespace std;

bool visited[2009];

vector<int> v[2009];

int k;

int dfs(int x)
{
    int i,y;

    visited[x]=1;

    k=x;

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
    int l;

    cin >> l;

    string st,pt;

    map <string,int> p;

    map <int,string> q;

    vector<pair<string,string>> res;

    int t=1,reso=0,i;

    while(l--)
    {
        cin >> st >> pt;

        if(p[st]==0)
        {
            p[st]=t;



            q[t]=st;

            t++;
        }

        if(p[pt]==0)
        {
            p[pt]=t;



            q[t]=pt;

            t++;
        }

        //cout << p[st] << " " << p[pt] << endl;

        v[p[st]].push_back(p[pt]);

    }

    memset(visited,0,sizeof(visited));

    for(i=1;i<=t;i++)
    {
        if(visited[i]==0 && v[i].size()>0)
        {
            k=0;

            dfs(i);

            //cout << k << " " << i << endl;

            res.push_back(make_pair(q[i],q[k]));

            reso++;
        }

    }

    cout << reso << endl;

    for(i=0;i<res.size();i++)
    {
        cout << res[i].first << " " << res[i].second << endl;
    }


    return 0;
}
