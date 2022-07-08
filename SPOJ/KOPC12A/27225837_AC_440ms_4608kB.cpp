#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    int n,p,i,j;

    vector <int> cost,height;



    while(t--)
    {
        cin >> n;

        for(i=0;i<n;i++)
        {
            cin >> p;

            height.push_back(p);
        }

        for(i=0;i<n;i++)
        {
            cin >> p;

            cost.push_back(p);
        }

        long long int d=1e12,price;

        for(i=0;i<n;i++)
        {
            price=0;

            for(j=0;j<n;j++)
            {
                price=price+(cost[j]*(abs(height[j]-height[i])));
            }

            if(price<d)
            {
                d=price;
            }
        }

        cout << d << endl;

        cost.clear();
        height.clear();
    }
    return 0;
}
