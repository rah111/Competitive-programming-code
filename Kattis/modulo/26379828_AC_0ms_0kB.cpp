#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    set<int> p;

    int t=10;

    while(t--)
    {
        cin >> n;

        n=n%42;

        p.insert(n);
    }

    cout << p.size() << endl;

    return 0;
}
