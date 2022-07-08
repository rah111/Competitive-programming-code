
#include<bits/stdc++.h>

using namespace std;

int dist[8][8];
// 8 direction knight movement..
const int dx[] = {1,2,1,2,-1,-2,-1,-2};
const int dy[] = {-2,-1,2,1,-2,-1,2,1};

int r=8,c=8;

// r by c grid - 0 based
// sx, sy - staring cell
// ex, ey - ending cell

bool outside_grid(int nx, int ny) {

    if(nx >= 0 && ny >= 0 && nx < r && ny < c)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool valid(int nx, int ny) {
   // check if this cell is valid or not according to the problem
}

void bfs(int sx, int sy) {

    memset(dist, -1, sizeof(dist));

    dist[sx][sy] = 0;

    queue <pair <int,int> > q;

    q.push(make_pair(sx, sy));

    while (!q.empty()) {

        pair <int,int> f = q.front();

        q.pop();

        for (int i = 0; i < 8; i++) {

            int nx = f.first + dx[i], ny = f.second + dy[i];

            if (outside_grid(nx, ny)==true) continue;

            //if (!valid(nx, ny)) continue;

            if (dist[nx][ny] == -1) {

                dist[nx][ny] = dist[f.first][f.second] + 1;

                //cout << nx << " " << ny << endl;

                q.push(make_pair(nx, ny));
            }
        }
    }
}




int main()
{
    string a,b;

    int sx,sy,ex,ey;

    while(cin >> a >> b)
    {
        sx=(int)a[0]-97;
        sy=(int)a[1]-49;

        ex=(int)b[0]-97;
        ey=(int)b[1]-49;

        //cout << sx << " " << sy << endl;

        bfs(sx,sy);

        cout << "To get from " << a << " to " << b << " takes " << dist[ex][ey] << " knight moves.\n";
    }

    return 0;
}
