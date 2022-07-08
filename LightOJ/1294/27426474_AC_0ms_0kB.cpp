#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,ts=0;

    cin >>t ;

    long long int n,m;

    while(t--)
    {
        cin >> n >> m;

        ts++;

        printf("Case %d: %ld\n",ts,(n/2)*m);
    }
    return 0;
}
