#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p[10009];

    int k;

    int i=1;

    while(cin >> k)
    {
        p[i]=k;

        sort(p,p+i+1);

        if(i==1)
        {
            cout << k << endl;
        }
        else if(i%2==0)
        {
            cout << (p[i/2]+p[((i/2)+1)])/2 << endl;
        }
        else
        {
            cout << p[((i+1)/2)] << endl;
        }

        i++;
    }
    return 0;
}
