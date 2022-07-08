#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,p,z=0,c=0;

    cin >> k;



    for(int i=0;i<k;i++)
    {
        cin >> p;

        z++;

        if(p!=z)
        {
            c++;
        }


    }

    if(c<=2)
    {
        cout << "YES";
    }

    else

        cout << "NO";


    return 0;
}
