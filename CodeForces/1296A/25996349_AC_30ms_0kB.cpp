#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int cnt,n,p;

    int cntEven,cntOdd;

    while(test--)
    {
        cin >> n;

        cnt=0;
        cntEven=0;
        cntOdd=0;

        while(n--)
        {
            cin >> p;

            cnt=cnt+p;

            if(p%2==0)
            {
                cntEven++;
            }

            else

                cntOdd++;
        }

        if(cnt%2!=0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(cntEven==0 && cntOdd%2==0)
            {
                cout << "NO" << endl;
            }

             else if(cntEven>0 && cntOdd==0)
             {
                 cout << "NO" << endl;
             }

             else

                cout << "YES" << endl;


        }
    }
    return 0;
}
