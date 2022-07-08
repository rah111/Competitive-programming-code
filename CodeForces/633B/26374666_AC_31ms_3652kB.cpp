#include<bits/stdc++.h>
#define ll long long int


using namespace std;



int main()
{

    

    int t;

    cin >> t;

    int p=0,q=0,z;

    while(p<t)
    {
        q=q+5;

        z=q;

        while(z%5==0)
        {
            p++;

            z=z/5;
        }
    }

    if(p>t)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 5 << endl;
        cout << q << " "<< q+1 << " "<< q+2 << " "<< q+3 << " "<< q+4 <<endl;
    }




    

    return 0;
}
