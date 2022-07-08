#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,result,p=0,q=0;
    cin >> n;



    for(int i=1;i<=n;i++)
    {
        cin >> k;

        if(k%2!=0)
        {
            p=p+i;
        }
        else
        {
            q=q+i;
        }
    }


    if(q>p)
        cout << p <<endl;
    else
        cout << q <<endl;

    return 0;
}
