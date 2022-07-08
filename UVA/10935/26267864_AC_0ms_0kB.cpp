#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue <int> q;

    int n,l,i;

    while(true)
    {
        cin >> n ;

        if(n==0)
        {
            break;
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                q.push(i);
            }

            cout << "Discarded cards:";

            while(q.size()>1)
            {
                cout <<" " << q.front();

                q.pop();

                l=q.front();

                q.push(l);

                q.pop();

                if(q.size()>1)
                {
                    cout << ",";
                }
            }

            cout << endl;

            cout << "Remaining card: " << q.front()<<endl;

            q.pop();
        }
    }
    return 0;
}
