#include<bits/stdc++.h>
#define ll long long int

using namespace std;




int main()
{
    int n;

    cin >> n;

    ll t,y=0;

    vector<ll>a;

    int i;

    for(i=0; i<n; i++)
    {
        cin >> t;

        if(y!=t)
        {
            a.push_back(t);

            y=t;
        }


    }



    int q;

    cin >> q;

    ll b[q];

    ll key;

    for(i=0; i<q; i++)
    {
        cin >> b[i];
    }

    for(i=0; i<q; i++)
    {
        if(b[i]<a[0])
        {
            cout << "X" << " " << a[0] << endl;
        }
        else if(b[i]>a[a.size()-1])
        {
            cout << a[a.size()-1] << " " << "X" << endl;
        }

        else

        {

            key=b[i];

            int l=0,r=a.size()-1,mid;

            bool flg=0;

            while(l<=r)
            {
                mid=(l+r)/2;

                if(a[mid]==key)
                {
                    if(mid==0)
                    {
                        cout << "X" << " " << a[1] << endl;
                    }
                    else if(mid==n-1)
                    {
                        cout << a[mid-1] << " " << "X" << endl;
                    }
                    else
                    {
                        cout << a[mid-1] << " " << a[mid+1] << endl;
                    }

                    l=r+1;

                    flg=1;

                }
                else if(a[mid]<key)
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }

            }

            if(flg==0)
            {
                if(a[mid]>key)
                {
                    cout << a[mid-1] << " " << a[mid] << endl;
                }
                else
                {
                    cout << a[mid] << " " << a[mid+1] << endl;
                }
            }


        }

    }

    return 0;
}
