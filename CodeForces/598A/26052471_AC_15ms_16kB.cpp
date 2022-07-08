
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int cnt,i;
    long long int p , n, d;



    while(test--)
    {

        cin >> n;

        p=n;

        cnt=0;
        d=0;

        while(p>1)
        {
            if(p%2!=0)
            {
                p=p-1;

                p=p/2;

                cnt++;
            }
            else
            {
                p=p/2;

                cnt++;
            }
        }

        n=(n*(n+1))/2;

        for(i=0;i<=cnt;i++)
        {
            d=d+pow(2,i);
        }

        cout << (n-d)-d << endl;
    }
    return 0;
}
