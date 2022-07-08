#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector <int> v;

    int k,i;

    for(i=0;i<n;i++)
    {
        cin >> k;

        v.push_back(k);
    }

    sort(v.begin(),v.end());

    int it,pt,res=0;

    for(i=0;i<n;i++)
    {
        k=v[i]+5;

        it=upper_bound(v.begin(),v.end(),k)-v.begin()-1;

        //cout << it << " " << v[it] << endl;

        res=max(res,it-i+1);


    }

    cout << res << endl;


    return 0;
}
