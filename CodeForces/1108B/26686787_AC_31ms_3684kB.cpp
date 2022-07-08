#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;

    cin >> n;

    int a[n];

    int freq[10005]={0};

    int maxp=0;

    int i;

    vector<int> d;

    for(i=0;i<n;i++)
    {
        cin >> p;

        a[i]=p;

        freq[p]++;

        if(p>maxp)
        {
            maxp=p;
        }
    }

    sort(a,a+n);

    for(i=n-1;i>=0;i--)
    {
        if(maxp%a[i]==0)
        {
            if(freq[a[i]]>1)
            {
                freq[a[i]]--;

                d.push_back(a[i]);
            }

        }
        else
        {
            d.push_back(a[i]);
        }

    }

    sort(d.begin(),d.end());

    cout << maxp << " " << d[d.size()-1] << endl;



    return 0;
}
