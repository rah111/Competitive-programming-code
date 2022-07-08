#include<bits/stdc++.h>
#define ll long long int

using namespace std;

// sorting vector and then adding
// all will give wrong answer
// u need to push every sum

int main()
{
    priority_queue <ll, vector<ll>, greater<ll>> q;


    //by default priority queue is max heap
    // but here we need min heap

    ll n,k,sum,a,b,i;

    while(true)
    {
        cin >> n;

        if(n==0)
        {
            break;
        }

        for(i=0;i<n;i++)
        {
            cin >> k;

            q.push(k);
        }

        sum=0;

        while(q.size()>=2)
        {
            a=q.top();
            q.pop();

            b=q.top();
            q.pop();

            // cout << a << " " << b << endl;

            sum=sum+a+b;

            q.push(a+b);

        }

        cout << sum << endl;

        q.pop(); // cost me 30 minutes



    }

    return 0;
}
