#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;

    cin >> n;

    if(n%2==0)
    {
        p=n/2;

        if(p%2!=0)
        {
            cout << p-2 << " " << p+2 << endl;
        }
        else


        cout << p-1 << " " << p +1 << endl;
    }

    else if(n%2!=0)
    {
        cout << n/2 << " " << (n/2)+1 << endl;
    }









    return 0;
}
