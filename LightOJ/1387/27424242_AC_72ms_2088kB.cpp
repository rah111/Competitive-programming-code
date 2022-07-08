#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,q=0,a,p;

    cin >> t ;

    string s;

    while(t--)
    {
        cin >> n;

        q++;

        printf("Case %d:\n",q);

        a=0;

        while(n--)
        {
            cin >> s;

            if(s=="donate")
            {
                cin >> p;

                a=a+p;
            }
            else
            {
                printf("%d\n",a);
            }
        }
    }
    return 0;
}
