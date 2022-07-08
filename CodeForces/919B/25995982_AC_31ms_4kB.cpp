#include <bits/stdc++.h>

using namespace std;

int digit(int x)
{
    int p=0;

    while(x>0)
    {
        p=p+(x%10);

        x=x/10;
    }

    return p;
}

int main()
{
    int n;

    cin >> n;



    int p=10;



    while(n>0)
    {
        p=p+9;


        if(digit(p)==10)
        {
            n--;
        }

    }

    cout << p << endl;

    return 0;
}
