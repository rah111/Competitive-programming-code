#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,p,i,cnt=1;

    cin >> n;



    for(i=0;i<n;i++)
    {
        cin >> k;



        if(i>0)
        {
            if(p-k!=0)
            {
                cnt++;

            }

        }

        p=k;
    }

    cout << cnt << endl;
    return 0;
}
