#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int n,p,cnt;

    while(test--)
    {
        cin >> n ;

        cnt=0;

        while(n--)
        {
            cin >> p;

            if(p!=0)
            {
                cnt++;
            }

        }

        cout << cnt << endl;
    }
    return 0;
}
