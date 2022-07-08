
#include<bits/stdc++.h>

using namespace std;



int main()
{
    bool isvisited[100009]={false};

    int n,m;

    cin >> n >> m;

    int i;

    int a[n];

    for(i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    int cnt=0;

    int counta[n];

    for(i=n;i>=1;i--)
    {
        if(isvisited[a[i]]==false)
        {
           isvisited[a[i]]=true;

           cnt++;

           counta[i]=cnt;

        }
        else
        {
            counta[i]=cnt;
        }
    }

    int p;

    

    while(m--)
    {
        cin >> p;

        cout << counta[p] << endl;
    }



    return 0;
}
