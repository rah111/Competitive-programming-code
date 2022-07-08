#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}

int main()
{
    long long  n,k,d=1;

    cin >> n >> k;

    for(int i=0;i<k;i++)
    {
        d=d*10;
    }

    cout << ((n*d)/(gcd(n,d))) << endl;

    return 0;
}