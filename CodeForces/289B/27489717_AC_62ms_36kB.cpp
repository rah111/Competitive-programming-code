#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,d,p;

    cin >> n >> m >> d;

    int i,cnt=0;

    p=n*m;

    int a[p];

    for(i=0;i<p;i++)
    {
        cin >> a[i];

        if(i>0)
        {
            if(abs(a[i]-a[i-1])%d!=0)
            {
                cout << -1 << endl;

                return 0;
            }
        }

    }

    sort(a,a+p);

    m=a[p/2];

    for(i=0;i<p;i++)
    {
        if(m>a[i])
        {
            cnt=cnt+((m-a[i])/d);
        }
        else if(m<a[i])
        {
            cnt=cnt+((a[i]-m)/d);
        }
    }

    cout << cnt << endl;


    return 0;
}
