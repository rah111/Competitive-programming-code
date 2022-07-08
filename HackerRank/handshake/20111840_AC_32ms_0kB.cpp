#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    long long p;

    cin >> n;

    while(n--)
    {
        cin >> p;

        cout << (p*(p-1))/2 << endl;
    }
    return 0;
}
