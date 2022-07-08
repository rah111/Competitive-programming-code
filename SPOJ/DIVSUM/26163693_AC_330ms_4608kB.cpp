#include<bits/stdc++.h>

using namespace std;

int SOD ( int n ) {
    int sqrtn = sqrt ( n );
    int res = 0;
    for ( int i = 1; i < sqrtn; i++ ) {
        if ( n % i == 0 ) {
            res += i; //"i" is a divisor
            res += n / i; //"n/i" is also a divisor
        }
    }
    if ( n % sqrtn == 0 ) {
        if ( sqrtn * sqrtn == n ) res += sqrtn; //Perfect Square.
        else {
            res += sqrtn; //Two different divisor
            res += n / sqrtn;
        }
    }
    return res;
}

int main()
{
    int test;

    cin >> test;

    int n;

    while(test--)
    {
        cin >> n ;

        cout << SOD(n)-n << endl;
    }

    return 0;
}
