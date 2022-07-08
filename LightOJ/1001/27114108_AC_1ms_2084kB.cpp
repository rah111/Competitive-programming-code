#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d",&t);

    int n;

    while(t--)
    {
        cin >> n;

        if(n%2==0)
        {
            printf("%d %d\n",n/2,n/2);
        }
        else
        {
            printf("%d %d\n",n/2,(n/2)+1);
        }
    }

    return 0;
}
