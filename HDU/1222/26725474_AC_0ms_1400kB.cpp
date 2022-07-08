#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int  main()
{

    int test;

    cin >> test;

    ll m , n, t;

    while(test--)
    {
      cin >> m >> n;

      t=__gcd(m,n);

      if(t==1)
      {
          cout << "NO" << endl;
      }
      else
      {
          cout << "YES" << endl;
      }
    }
    return 0;
}
