
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,b;

    cin >> t;

    while(t--)
    {
        cin >> n;

        int a[n];

        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }

        b=0;

        for(i=0;i<n-1;i++)
        {
            if(a[i+1]==(a[i]+1) )
            {
                if(b==0)
                {
                    if(i!=0)
                    {
                        cout <<",";
                    }

                    cout << a[i];

                    b++;
                }
                else
                {
                    b++;
                }
            }
            else
            {
               if(b>=2)
               {
                   cout <<"..."<<a[i];
               }

               else
               {
                   if(i!=0) cout << ",";

                   cout << a[i];
               }

               b=0;
            }

        }

        if(a[n-1]==(a[n-2]+1))
        {
            if(b>=2)
            {
               cout <<"..."<<a[n-1] << endl;
            }
            else
            {
                cout << ","<< a[n-1] << endl;
            }
        }
        else
        {
            if(n!=1)
            {
                cout <<",";
            }

            cout << a[n-1] << endl;
        }


    }
    return 0;
}
