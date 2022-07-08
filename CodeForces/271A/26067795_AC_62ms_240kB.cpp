#include <bits/stdc++.h>

using namespace std;

int main()
{
    int year;

    cin >> year;

    int a,b,c,d,p;

    while(true)
    {
        year=year+1;

        p=year;

        d=p%10;

        p=p/10;

        c=p%10;

        p=p/10;

        b=p%10;

        p=p/10;

        a=p%10;

        if(a!=b && a!=c && b!=c && a!=d && b!=d && c!=d)
        {
            cout << year << endl;

            break;
        }
    }
    return 0;
}
