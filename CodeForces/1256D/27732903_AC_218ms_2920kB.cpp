#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    string q;

    long long int n,k,zero,i,p;

    while(t--)
    {
        cin >> n >> k;

        cin >> q;

        zero=0;

        for(i=0;i<q.size();i++)
        {
            if(q[i]=='0')
            {
                p=min((i-zero),k);

                swap(q[i],q[i-p]);

                zero++;

                k=k-p;
            }
        }

        cout << q << endl;
    }

    return 0;
}
