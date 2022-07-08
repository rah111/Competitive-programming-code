#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,k,res=0;

    cin >> n >> x;

    int i;


    for(i=0;i<n;i++)
    {
       cin >> k;

       res=res+k;


    }

    int j = abs(res);



    if(j%x==0)
    {
        cout << j/x << endl;
    }

    else

        cout << (j/x)+1 << endl;


    return 0;
}
