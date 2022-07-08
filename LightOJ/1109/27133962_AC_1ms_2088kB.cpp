#include<bits/stdc++.h>

using namespace std;

bool comparator(pair<int,int>x , pair<int,int>y)
{
    if(x.second==y.second)
    {
        return x.first>y.first;
    }
    else
        return x.second<y.second;
}
int main()
{

    int i,p,cnt,j;

    vector<pair<int,int>> v;


    for(i=1;i<=1000;i++)
    {
        p=sqrt(i);

        cnt=0;

        for(j=1;j<=p;j++)
        {
            if(i%j==0)
            {
                if(i/j==j)
                {
                    cnt++;
                }
                else
                {
                    cnt=cnt+2;
                }
            }
        }

        v.push_back(make_pair(i,cnt));
    }

    sort(v.begin(),v.end(),comparator);

    int test;

    scanf("%d",&test);

    int t=0,n;

    while(test--)
    {
        scanf("%d",&n);

        t++;

        printf("Case %d: %d\n",t,v[n-1].first);
    }




    return 0;
}
