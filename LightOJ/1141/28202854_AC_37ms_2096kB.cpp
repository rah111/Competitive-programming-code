#include <bits/stdc++.h>

using namespace std;

bool mark[1000];

bool visited[1009];

int level[1009];

vector <int> data;

void prime()
{
    int i,j;

    for(i=4;i<=1000;i=i+2)
    {
        mark[i]=false;


    }

    for(i=3;i<=1000;i=i+2)

    {
        mark[i]=true;

    }

    int o=sqrt(1000);

    for(i=3;i<=o;i=i+2)
    {

        if(mark[i]==true)
        {
            for(j=i*i;j<=1000;j=j+2*i)

            {
                mark[j]=false;
            }
        }
    }

    data.push_back(2);

    for(i=3;i<=1000;i=i+2)
    {

        if(mark[i]==true)
        {

             data.push_back(i);
        }

    }
}

int bfsWithPrimeFact(int x,int y)
{
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));

    int i,p,k;

    queue <int> q;

    q.push(x);

    visited[x]=1;

    while(!q.empty())
    {
        p=q.front();

        q.pop();



        if(p==y)
        {
            return level[p];
        }




        for(i=0;data[i]<=(p/2);i++)
        {

            if(p%data[i]==0 && p<y)
            {
                k=p+data[i];



                if(visited[k]==0)
                {
                    visited[k]=1;
                    level[k]=level[p]+1;

                    q.push(k);
                }
            }
        }
    }

    if(visited[y]==0)
    {
        return -1;
    }
}


int main()
{
    prime();

    int testcase,t=0,w,z;

    cin >> testcase;

    while(testcase--)
    {
        t++;

        cin >> w >> z;

        cout <<"Case " << t <<": " << bfsWithPrimeFact(w,z) << endl;
    }





    return 0;
}