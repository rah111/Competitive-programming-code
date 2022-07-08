#include<bits/stdc++.h>

using namespace std;


// here we should negate the minimum number always
// a 5 size array 2 3 4 5 6 and k=3 ... ans=16 not ans=2

int main()
{
    int test;



    cin >> test;

    int n,k,i,t;

    int p;

    priority_queue<int,vector<int>,greater<int> >pq;

    while(test--)
    {
        cin >> n >> k;

        p=0;

        for(i=0;i<n;i++)
        {
            cin >> t;

            pq.push(t);
        }

         while(k--)
         {
             if(!pq.empty())
             {
                 t=pq.top();

                 pq.pop();

                 t=t*(-1);

                 pq.push(t);

             }
         }

         while(!pq.empty())
         {
             p=p+pq.top();

             pq.pop();
         }

         cout << p << endl;

    }

    return 0;
}
