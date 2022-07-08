#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    double q,p;

    while(t--)
    {
        cin >> q >> p;

        if(q<=1000)
        {
            printf("%0.6lf\n",q*p);
        }
        else
        {
            printf("%0.6lf\n",(q*p)-((q*p)*0.1));
        }
    }


    return 0;
}
