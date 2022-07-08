#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,tr=0;

    cin >> t;

    int n,m,k,p,i,j,q,number;

    while(t--)
    {

        cin >> n >> m >> k;

        int pos[40][40]={0};
        int neg[40][40]={0};
        int take[40]={0};
        bool happy[40]={0};
        bool flg=0;


        for(i=0; i<n; i++)
        {
            for(j=0; j<k; j++)
            {
                cin >> number;

                if(number<0)
                {
                    neg[i][abs(number)]=1;
                }
                else
                {
                    pos[i][number]=1;
                }
            }
        }

        cin >> p;

        for(i=0;i<p;i++)
        {
            cin >> q;

            take[q]=1;
        }

        for(i=1;i<=m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(take[i]==1)
                {
                    if(pos[j][i]==1)
                    {
                        happy[j]=1;
                    }
                }
                else
                {
                    if(neg[j][i]==1)
                    {
                        happy[j]=1;
                    }
                }
            }
        }

        // making sure everyone is happy

        for(i=0;i<n;i++)
        {
            if(happy[i]==0)
            {
                flg=1;
            }
        }

        tr++;

        if(flg==0)
        {
            printf("Case %d: Yes\n",tr);
        }
        else
        {
            printf("Case %d: No\n",tr);
        }
    }

    return 0;
}
