#include <bits/stdc++.h>

using namespace std;

double digit[1000005];

int main()
{
    digit[0]=0;

    int i;

    for(i=1;i<=1000000;i++)
    {
        digit[i]=digit[i-1]+log(i);
    }

    int test,j=0;

    cin >> test;

    int n , b;

    long long cnt;

    while(test--)
    {
        j++;

        cin >> n >> b;

        cnt=(digit[n]/log(b))+1;

        cout << "Case " << j << ": " << cnt << endl;
    }



    return 0;
}
