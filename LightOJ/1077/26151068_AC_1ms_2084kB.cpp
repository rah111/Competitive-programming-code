
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    long int x1,y1,x2,y2;

    int i=0;

    while(test--)
    {
         i++;

        cin >> x1 >> y1 >> x2 >> y2 ;

        cout <<"Case " << i << ": " << __gcd(abs(x1-x2),abs(y1-y2))+1 << endl;
    }
    return 0;
}

