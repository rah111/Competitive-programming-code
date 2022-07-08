#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;

    cin >> n;

    getchar();



    map <string,string> p;

    while(n--)
    {
        string sl1,sl2;
        getline(cin,sl1);
        getline(cin,sl2);

        p[sl1]=sl2;

    }

    cin >> k;

    getchar();

    while(k--)
    {
        string sl3;

        getline(cin,sl3);

        cout << p[sl3] << endl;
    }
    return 0;
}
