#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    int a,b,res,p=0;

    while(t--)
    {
        cin >> a >> b;

        p++;

        if(a>b)
        {
            res=(((a-b)*4)+(a*4)+9+10);



        printf("Case %d: %d\n",p,res);
        }
        else
        {
            res=(b*4)+10+9;



        printf("Case %d: %d\n",p,res);
        }


    }
    return 0;
}
