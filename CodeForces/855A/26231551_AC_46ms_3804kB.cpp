#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int i,j,flag;

    string p,k;

    string a[n];

    for(i=0;i<n;i++)
    {
        cin >> p;

        a[i]=p;



        if(i==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            flag=0;

            for(j=0;j<i;j++)
            {
                k=a[j];

                if(p==k)
                {
                    cout << "YES" << endl;

                    j=i;

                    flag=1;
                }


            }

            if(flag==0)
            {
                cout << "NO" << endl;
            }

        }
    }
    return 0;
}
