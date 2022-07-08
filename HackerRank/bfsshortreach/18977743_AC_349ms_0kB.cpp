#include <bits/stdc++.h>
using namespace std;
#define N 100000


int main ()
{
    int n, m, x, y,testCase;

    cin >> testCase;

    int visited[N], level[N];

    queue <int> q;


    for(int p=0;p<testCase;p++){


    cin >> n >> m;

    vector <int> v[N];

    for (int i = 1; i<=m; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);

    }




int startNode;

cin >> startNode;




    memset(visited, 0, sizeof(visited));
    memset(level, 0, sizeof(level));


    q.push(startNode);
    visited[startNode] = 1;

    while (!q.empty()){
        x = q.front();
        q.pop();

        for (int i = 0; i<v[x].size(); i++){
            y = v[x][i];
            if (visited[y]==0){
                q.push(y);
                visited[y] = 1;
                level[y] = level[x]+6;


            }}}

              for(int t=1;t<=n;t++){ if(t!=startNode){


              if(level[t]==0)

                cout << "-1 " ;
              else



                cout << level[t] << " ";
              }}

              cout << "\n";





    }


               return 0;
}