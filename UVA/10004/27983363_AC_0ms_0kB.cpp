#include <bits/stdc++.h>

using namespace std;

int flag=0;

int colored[209];

vector<int> v[209];

void bicolor(int node,int col)
{
    queue <int> q;

    int t,y;

    q.push(node);

    colored[node]=col;

    while(!q.empty())
    {
        t=q.front();

        q.pop();

        for(int i=0;i<v[t].size();i++)
        {
            y=v[t][i];

            if(colored[y]==0 && colored[t]==1)
            {
                q.push(y);

                colored[y]=2;
            }

            else if(colored[y]==0 && colored[t]==2)
            {
                q.push(y);

                colored[y]=1;
            }

            else if(colored[y]!=0 && colored[t]==colored[y])
            {
                flag=1;

                return ;
            }

        }
    }
   
    

}

int main()
{
    int n,l,i,q,p;

    while(true)
    {
        cin >> n;

        if(n==0)
        {
            break;
        }

        cin >> l;

        for(i=1;i<=l;i++)
        {
            cin >> q >> p;

            v[q].push_back(p);
            v[p].push_back(q);
        }

        memset(colored,0,sizeof(colored));

        bicolor(0,1);

        if(flag==1)
        {
            cout << "NOT BICOLORABLE." <<endl;
        }

        else
            cout << "BICOLORABLE." <<endl;


        for(i=0;i<n;i++)
        {
            v[i].clear();
        }

        flag=0;


    }




    return 0;
}