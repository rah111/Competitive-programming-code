#include<bits/stdc++.h>

using namespace std;

bool comparator(pair<int,int>x , pair<int,int>y)
{
    if(x.first==y.first)
    {
        return x.second<y.second;
    }
    else
        return x.first<y.first;
}

int main()
{
    int n;

    cin >> n;

    int a,b,p,last,i;

    vector<pair<int,int>>v;

    while(n--)
    {
        cin >> a >> b;

        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end(),comparator);

    p=v.size();



    last=v[0].second;

    for(i=1;i<p;i++)
    {
        if(v[i].second>=last)
        {
            last=v[i].second;
        }
        else
        {
            last=v[i].first;

        }
    }

    cout << last << endl;



    return 0;
}
