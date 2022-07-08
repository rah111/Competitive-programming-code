
#include<bits/stdc++.h>

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long

using namespace std;


int main()
{
    int test;

    cin >> test;

    ll n , k,p,i;

   

    while(test--)
    {
        cin >> n >> k;

        if(k>=n)
        {
            cout << 1 << endl;
        }
        else
        {
            p=sqrt(n);

vector<int> v;

            for(i=1;i<=p;i++)
            {
                if(n%i==0)
                {
                    if((n/i)<=k)
                    {
                        v.push_back(n/i);
                    }

                    if(i<=k)
                    {
                        v.push_back(i);
                    }

                }
            }

            sort(v.begin(),v.end());

            cout << n/v[v.size()-1] << endl;

            
        }

    }
    return 0;
}
