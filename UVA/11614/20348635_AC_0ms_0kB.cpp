#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    long long d, p;

    while(test--)
    {
        cin >> p;

        d=(p*8)+1;

        d=sqrt(d);

        d=d-1;

        d=d/2;

        cout << d << endl;
    }
    return 0;
}
