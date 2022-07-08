#include <bits/stdc++.h>
#define io  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    io

    int n;

    cin >> n;

    vector <long long int>input;

    vector<long long   int>res;

    int i,q,op;

    long long int k;

    for(i=0;i<n;i++)
    {
        cin >> k;

        input.push_back(k);
    }

    for(i=n-1;i>=0;i--)
    {
        res.push_back(input[i]);
    }

    cin >> q;

    int l,r;

    long long int p,x;

    while(q--)
    {
        cin >> op;

        if(op==1)
        {
            p=0;

            cin >> l >> r;

            l=l-1;

            r=r-1;

            l=res.size()-l-1;

            r=res.size()-r-1;

            while(r<=l)
            {
                p=p+res[r];

                r++;
            }

            cout << p << endl;
        }
        else if(op==2)
        {
            cin >> x;

            res.push_back(x);
        }

    }


    return 0;
}
