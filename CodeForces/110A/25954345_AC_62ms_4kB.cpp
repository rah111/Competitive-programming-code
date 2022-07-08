#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    int p,c=0;

    while(n!=0)
    {
        p=n%10;

        if(p==4 || p==7)
        {
            c++;
        }

        n=n/10;
    }

    if(c==4 || c==7)
    {
        cout << "YES" << endl;
    }

    else

        cout << "NO" << endl;
    return 0;
}