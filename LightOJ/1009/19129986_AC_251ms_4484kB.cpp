
#include <bits/stdc++.h>

using namespace std;

vector<int > v[20009];

int vis[20009];

int black,white,ans;

void bfs()
{

    queue <int> q;

    ans=0;

    memset(vis,0,sizeof(vis));

    int i,p,y;

    for(i=1; i<=20000; i++)
    {

        if(vis[i]==0 && !v[i].empty())
        {



            black=0;
            white=0;

            q.push(i);

            vis[i]=1;

            black++;

            while(!q.empty())
            {
                p=q.front();

                

                q.pop();



                for(int i=0; i<v[p].size(); i++)
                {
                    y=v[p][i];







                    if(vis[y]==0)
                    {



                        if(vis[p]==1)
                        {
                            vis[y]=2;





                            white++;
                        }

                        else
                        {
                            vis[y]=1;



                            black++;
                        }

                        q.push(y);

                    }
                }


            }

             ans = ans + max(black,white);



        }




    }
}

int main()
{

    int testcase,z=0;

    cin >> testcase;

    int n,j,w,m;

    while(testcase--)
    {

        z++;

        cin >> n;

        for(j=0; j<n; j++)
        {
            cin >> w >> m;

            v[w].push_back(m);
            v[m].push_back(w);

        }

        bfs();

        cout << "Case " << z << ": " << ans << endl;

        for(j=1; j<=20000; j++)
        {
            v[j].clear();
        }



    }

    return 0;
}

