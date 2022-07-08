
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n;

    cin >> n;

    char a;

    int i,l=1,k=2;

    for(i=1;i<=n;i++)
    {
        cin >> a;

        if(i==l)
        {
            cout << a;

            l=i+k;

            k++;
        }



    }

    return 0;
}
