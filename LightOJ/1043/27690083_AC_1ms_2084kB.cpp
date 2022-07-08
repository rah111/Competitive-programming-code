
#include<bits/stdc++.h>

using namespace std;

/*Theorem-1: If two triangles are equiangular,
 then their matching sides are also proportional.

Theorem-2: The ratio of the areas of two similar
 triangles is equal to the ratio of the squares
  on any two matching sides.

  (AD/AB)=(AE/AC)=(DE/BC)

  (ADE/ABC)=(AD^2/AB^2)
  */

int main()
{
    int t;

    cin >> t;

    double ab,ac,bc,rat,ad;

    int ts=0;

    while(t--)
    {
        cin >> ab >> ac >> bc >> rat;

        ad=sqrt(rat/(rat+1))*ab;

        ts++;

        printf("Case %d: %0.7lf\n",ts, ad);
    }

    return 0;
}

