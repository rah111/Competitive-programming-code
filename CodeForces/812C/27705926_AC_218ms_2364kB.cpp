#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;

ll a[100007];
vector <ll> ap;

ll cost(ll factor)
{
    ll i,cnt=0;

    ap.clear();

    for(i=1;i<=n;i++)
    {

        ap.push_back((i*factor)+a[i]);

    }

    sort(ap.begin(),ap.end());

    for(i=0;i<factor;i++)
    {
        cnt=cnt+ap[i];
    }

    return cnt;
}


int main()
{

    ll budget,p,l,r,mid,i,temp,res,res2;


        cin >> n >> budget;

        for(i=1;i<=n;i++)
        {
            cin >> a[i];
        }



        l=0;

        r=n;

        res=0;

        res2=0;

        while(l<=r)
        {
            mid=l+((r-l)/2);

            temp=cost(mid);



            if(temp>budget)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;

                res=mid;

                res2=temp;
            }
        }

        cout << res << " " << res2 << endl;





    return 0;
}
