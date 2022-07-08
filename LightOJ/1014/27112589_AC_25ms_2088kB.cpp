#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    int l ,p,t=0,d,i;

    vector<int> res;

    while(test--)
    {
        scanf("%d%d",&l,&p);

        l=l-p;

        d=sqrt(l);

        for(i=1;i<=d;i++)
        {
            if(l%i==0)
            {
                    if(i==l/i && i>p)
                    {
                        res.push_back(i);
                    }
                    else
                    {
                        if(i>p)
                        {
                            res.push_back(i);
                        }

                        if((l/i)>p)
                        {
                            res.push_back(l/i);
                        }

                    }

                }
            }


        sort(res.begin(),res.end());

        t++;

        printf("Case %d:",t);

        if(res.size()==0)
        {
            printf(" impossible\n");
        }
        else
        {


            for(i=0;i<res.size();i++)
            {
                printf(" %d",res[i]);
            }

            printf("\n");
        }

        res.clear();
    }
    return 0;
}

