#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll fact[20];

    int i,tr=0;

    fact[0]=1;

    for(i=1;i<=20;i++)
    {
        fact[i]=fact[i-1]*i;
    }

    int t;

    cin >> t;

    vector<int>v;

    ll n;

    while(t--)
    {
      cin >> n;

      tr++;

      for(i=20;i>=0;i--)
      {
          if(n>=fact[i])
          {
              n=n-fact[i];

              v.push_back(i);
          }

      }

      if(n==0)
      {
          printf("Case %d: ",tr);

          for(i=v.size()-1;i>=0;i--)
          {
              printf("%ld!",v[i]);

              if(i>0)
              {
                  printf("+");
              }
          }

          printf("\n");
      }
      else
      {
         printf("Case %d: impossible\n",tr);
      }

      v.clear();
    }
    return 0;
}
