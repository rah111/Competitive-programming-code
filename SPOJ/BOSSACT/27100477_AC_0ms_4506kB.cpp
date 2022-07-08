#include<bits/stdc++.h>

using namespace std;

bool comparator(pair<int,int> x,pair<int,int > y)

{

    if(x.second==y.second)
    {
        return x.first<y.first;
    }
    else
        return x.second<y.second;
}

int main()
{
    vector<pair <int ,int>> t;

    int test,i;

    cin >> test;

    int n,s,e,cnt,k;

    while(test--)
    {
        cin >> n;

        for(i=0;i<n;i++)
        {
            cin >> s >> e;

            t.push_back(make_pair(s,e));
        }

        sort(t.begin(),t.end(),comparator);

        cnt=1;
        k=t[0].second;

        for(i=1;i<n;i++)
        {
            if(k<=t[i].first)
            {
                cnt++;

                k=t[i].second;
            }
        }

        cout << cnt << endl;

        t.clear();
    }



    return 0;
}
