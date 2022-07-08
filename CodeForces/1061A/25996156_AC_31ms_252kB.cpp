#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    if(k%n==0)
    {
        cout << k/n << endl;
    }
    else

        cout << (k/n) +1 <<endl;


    return 0;
}
