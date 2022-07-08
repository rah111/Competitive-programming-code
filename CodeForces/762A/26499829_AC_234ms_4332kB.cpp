#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

using namespace std;

int main()
{
    io;

    ll n,k,i,len;

    vector <ll>divisor;

    stack<ll > st;

    cin >> n >> k;

    len = sqrt(n);

    for(i=1;i<=len;i++)
    {
        if(n%i==0)
        {
            if(i!=(n/i))
            {
                divisor.push_back(i);

                st.push(n/i);
            }
            else
            {
                divisor.push_back(i);
            }
        }
    }

    while(!st.empty())
    {
        divisor.push_back(st.top());

        st.pop();
    }

    if(k>divisor.size())
    {
        cout << -1 << endl;
    }
    else
    {
        cout << divisor[k-1] << endl;
    }


    return 0;
}
