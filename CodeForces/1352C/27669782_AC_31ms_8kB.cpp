#include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int test;
     
        cin >> test;
     
        int n;
        int k;
     
        int p,q;
     
        while(test--)
        {
            cin >> n >> k;
     
            p=k/(n-1);
     
            q=k%(n-1);
     
            if(q==0)
            {
                cout << (n*p)-1 << endl;
            }
            else
            {
                cout << (n*p)+q << endl;
            }
     
        }
        return 0;
    }