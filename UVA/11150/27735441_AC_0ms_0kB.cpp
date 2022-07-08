
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,cnt;

    while(cin >>n)
    {

            cnt=n;

            while(n>2)
            {
                cnt=cnt+(n/3);

                n=(n/3)+(n%3);
            }

            if(n==2)
            {
                cnt++;
            }


        cout << cnt << endl;
    }
    return 0;
}
