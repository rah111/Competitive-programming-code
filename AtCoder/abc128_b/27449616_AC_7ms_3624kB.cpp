#include<bits/stdc++.h>

using namespace std;

bool comparator(pair<string,int> a,pair<string,int> b)
{
    if(a.first==b.first)
        {
            return a.second>b.second;
        }
        else
            return a.first<b.first;


}

int main()
{
    int n;

    cin >> n;

    string s;

    int p,i=0;

    map<int,int>mp;

    vector<pair<string,int>> v;

    while(n--)
    {
        cin >> s >> p;

        v.push_back(make_pair(s,p));

        i++;

        mp[p]=i;


    }

    sort(v.begin(),v.end(),comparator);

    for(i=0;i<v.size();i++)
    {
        cout << mp[v[i].second] << endl;
    }

    return 0;
}
