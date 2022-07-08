#include<bits/stdc++.h>

using namespace std;

// (n*(n+1))/2=s
// ax^2+bx+c=0
// x=(-b+/-sqrt(b^2-4ac))/2a


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

        d=d-1; // here b=1 and a=1 

        d=d/2;

        cout << d << endl;
    }
    return 0;
}