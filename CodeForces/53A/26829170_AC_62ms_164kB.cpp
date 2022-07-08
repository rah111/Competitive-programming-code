#include<bits/stdc++.h>

using namespace std;

int main()
{
    string p,k;

    cin >> p;

    int n;

    cin >> n;

    vector<string> l;



    int i,cnt;

    for(i=0;i<n;i++)
    {
        cin >> k;

        if(k.find(p)==0)
        {
            l.push_back(k);
        }

    }

    if(l.size()==0)
    {
        cout << p << endl;
    }
    else

    {
        sort(l.begin(),l.end());

        cout << l[0] << endl;
    }

    return 0;
}
