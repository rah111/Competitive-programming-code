#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    long long int a[3];

    int p=0;

    while(test--)
    {
        cin >> a[0] >> a[1] >> a[2];

        sort(a,a+3);

        p++;

        a[2]=a[2]*a[2];

        a[1]=a[1]*a[1];

        a[0]=a[0]*a[0];

        if(a[2]==a[0]+a[1])
        {
            printf("Case %d: yes\n",p);
        }
        else
        {
            printf("Case %d: no\n",p);
        }
    }
    return 0;

}
