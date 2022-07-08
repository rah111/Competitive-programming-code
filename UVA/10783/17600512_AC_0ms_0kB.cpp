#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,a,b,res=0,i,p=1;

    cin >> test;

    while(test--)
    {
        cin >> a >> b;

        if(a%2==0)
        {

            for( i=a+1; i<=b; i=i+2)
            {
                res = res + i;

            }
        }

        if(a%2!=0)
        {
            for(i=a;i<=b;i=i+2)
            {
                res = res + i;
            }
        }

        cout << "Case " << p << ": " << res <<endl;

        p++;
        
        res=0;
    }

        return 0;

}