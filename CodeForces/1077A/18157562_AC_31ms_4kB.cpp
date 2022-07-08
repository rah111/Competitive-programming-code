#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase;

    cin >> testcase;

    long long a,b,k,d,p;

    while(testcase--)
    {
        cin >> a >> b >> k ;

        d=k/2;

        p=((k-d)*a)-(d*b);

        cout << p << endl;


    }
    return 0;
}