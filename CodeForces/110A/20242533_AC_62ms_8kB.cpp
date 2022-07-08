#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long k;

    long long p;

    cin >> k;

    int j=0;

    while(k!=0)
    {
        p=k%10;

        if(p==4 || p==7)
        {
            j++;




        }

        k=k/10;
    }

    if(j==4 || j==7)
        cout << "YES" << endl;

    else

        cout << "NO" << endl;

    return 0;
}
