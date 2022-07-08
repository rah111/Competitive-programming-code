#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    int i,n,p;

    cin >> n;

    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);

            p=n/i;

            if(p!=i)
            {
                v.push_back(p);
            }
        }
    }

    sort(v.begin(),v.end());

    for(i=0;i<v.size();i++)
    {
        cout << v[i]<< " ";
    }

    return 0;
}
