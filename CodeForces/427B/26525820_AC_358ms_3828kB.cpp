#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;

    long long int t,p;

    cin >> n >> t >> c;

    bool a[n+1];

    int i;

    for(i=1;i<=n;i++)
    {
        cin >> p;

        if(p<=t)
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }

    a[n+1]=0;// a situation can occur where i becomes greater
             // than n in inner while loop and therefore
             // a[i] tries to access a[n+1] location

    int cnt,k=0;

    for(i=1;i<=n;i++)
    {
        if(a[i]==1)
        {

            cnt=0;

            while(a[i]==1)
            {
                i++;

                cnt++;

            }



            if(cnt>=c)
            {
                k=k+((cnt-c)+1);
            }


        }
    }

    cout << k << endl;

    return 0;
}
