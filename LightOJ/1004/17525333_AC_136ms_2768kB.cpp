#include <bits/stdc++.h>

using namespace std;

long long store[209][209];

long long dp[209][209];

int n;

long long call(int x,int y)
{
    if(store[x][y]!=-1)
    {
        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }

        long long ret=0;

        if(x<n)
        {
            ret=max(ret,call(x+1,y)+store[x][y]);
            ret=max(ret,call(x+1,y+1)+store[x][y]);
        }

        else
        {
            ret=max(ret,call(x+1,y)+store[x][y]);
            ret=max(ret,call(x+1,y-1)+store[x][y]);

        }




        return dp[x][y]=ret;
    }

    else
        return 0;
}

int main()
{
    int test,k=0,i,j,t=0;

    cin >> test;

    while(test--)
    {
        memset(dp,-1,sizeof(dp));

        memset(store,-1,sizeof(store));

        cin >> n;

        for(i=1; i<=(2*n-1); i++)
        {

            if(i<=n)
            {
                for(j=1; j<=i; j++)
                {
                    cin >> store[i][j];
                }
            }

            if(i>n)
            {
                k++;

                for(j=1; j<=n-k; j++)
                {
                    cin >> store[i][j];
                }


            }

        }

        t++;

        cout << "Case "<< t << ": "<<call(1,1)<<endl;

        k=0;



        /* for(i=1;i<=(2*n-1);i++)
         {
             for(j=1;j<=n;j++)
             {
                 if(store[i][j]!=-1)
                 {
                    cout << store[i][j] <<" " ;
                 }


             }

             cout <<endl;
         }*/


    }

    return 0;
}
