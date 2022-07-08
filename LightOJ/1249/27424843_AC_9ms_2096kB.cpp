#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    vector<pair<int,string>> v;

    string st;

    int a,b,c,n,vol,tr=0;

    while(t--)
    {
        cin >> n;

        tr++;

        while(n--)
        {
            cin >> st >> a >> b >> c;

            vol=a*b*c;

            v.push_back(make_pair(vol,st));
        }

        sort(v.begin(),v.end());

        if(v[0].first==v[v.size()-1].first)
        {
            printf("Case %d: no thief\n",tr);
        }
        else
        {
            cout << "Case " << tr << ": " << v[v.size()-1].second << " took chocolate from " << v[0].second << endl;
        }

        v.clear();
    }
}
