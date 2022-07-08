#include <bits/stdc++.h>

using namespace std;

const int n=10e5+9;

vector<int>v[n];
vector<int>t;

int c;

int visited[n];

void dfs(int x)
{
    visited[x]=1;

    c=c+1;

    for(int i=0; i<v[x].size(); i++)
    {
        int y= v[x][i];

        if(visited[y]==0)
        {

            dfs(y);
        }
    }
}


int main()

{

    memset(visited,0,sizeof(visited));

    int k,p;



    cin >> k >> p;

    int i,a,b,j;

    while(p--)
    {
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(i=0; i<k; i++)
    {
        if(v[i].size()==0)
        {
            t.push_back(1);
        }

        else if(visited[i]==0)
        {
            c=0;

            dfs(i);

            t.push_back(c);


        }
    }



    long long ans=0,rem,pem=0;

    for(i=0; i<t.size(); i++)
    {
        pem=pem+t[i];

        rem=k-pem;

        ans=ans+(t[i]*rem);


    }

    cout << ans << endl;




    return 0;
}
