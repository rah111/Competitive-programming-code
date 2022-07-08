#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    char a[n][n];

    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt;
    bool flg=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cnt=0;

            if(i>0)
            {
                if(a[i-1][j]=='o')
                {
                    cnt++;
                }
            }
            if(j>0)
            {
                if(a[i][j-1]=='o')
                {
                    cnt++;
                }
            }
            if(j<n-1)
            {
                if(a[i][j+1]=='o')
                {
                    cnt++;
                }
            }
            if(i<n-1)
            {
                if(a[i+1][j]=='o')
                {
                    cnt++;
                }
            }

            if(cnt%2!=0)
            {
                flg=1;

                break;
            }

        }
    }

    if(flg==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}
