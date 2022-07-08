#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int i;
    int cnt=0;
    int k;

    for(i=0;i<n;i++)
    {
        cin >> k;

        cnt=cnt+k;

        a[i]=cnt;
    }

    int q;

    int range1,range2;

    cin >> q;

    while(q--)
    {
        cin >> range1 >> range2;

        if(range1==0)
        {
            cout << a[range2] << endl;
        }
        else
        {
            cout << a[range2]-a[range1-1] << endl;
        }
    }
    return 0;
}

