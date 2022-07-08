#include<bits/stdc++.h>


using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    string dc,bi;

    vector<int> v,b;

    int i,t=0,j,num,k,q;

    bool flg;

    while(test--)
    {
        cin >> dc >> bi;

        flg=0;

        t++;

        num=0;

        for(i=0;i<dc.size();i++)
        {
            if(dc[i]=='.')
            {
                v.push_back(num);

                num=0;

            }
            else
            {
                k=(int)dc[i]-48;

                num=(num*10)+k;
            }
        }

        v.push_back(num);

        q=7;

        num=0;

        for(i=0;i<bi.size();i++)
        {
            if(bi[i]=='.')
            {
                b.push_back(num);

                num=0;

                q=7;

            }
            else
            {
                k=(int)bi[i]-48;

                num=num+(pow(2,q)*k);

                q--;
            }
        }

        b.push_back(num);

        for(i=0;i<b.size();i++)
        {
            if(v[i]!=b[i])
            {
                printf("Case %d: No\n",t);

                flg=1;

                break;
            }
        }

        if(flg==0)
        {
             printf("Case %d: Yes\n",t);
        }

        b.clear();
        v.clear();
    }

    return 0;
}
