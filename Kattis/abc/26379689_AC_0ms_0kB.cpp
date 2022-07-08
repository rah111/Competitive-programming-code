#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[3];

    int i;

    string p;

    for(i=0;i<3;i++)
    {
        cin >> a[i];

    }

    cin >> p;

    sort(a,a+3);

     for(i=0;i<3;i++)
    {
        if(p[i]=='A')
        {
           cout <<  a[0] << " ";
        }
        else if(p[i]=='B')
        {
           cout <<  a[1] << " ";
        }
        else if(p[i]=='C')
        {
            cout << a[2] << " ";
        }

    }

    return 0;
}
