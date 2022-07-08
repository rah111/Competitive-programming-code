#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n+5][n+5];

    char ch;

        int i,p=0,j;

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    a[i][j]=67;

                    p++;
                }
                else
                {
                    a[i][j]=46;
                }
            }
            else
            {
                if(j%2!=0)
                {
                    a[i][j]=67;

                    p++;
                }
                else
                {
                    a[i][j]=46;
                }
            }
        }

    }

    cout << p << endl;

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            ch=a[i][j];

            cout << ch;
        }

        cout << "\n";

    }

    return 0;
}
