#include<bits/stdc++.h>

using namespace std;

int n;

vector<int> v;

int cowcount(int dis)
{
    int start=0,i,cnt=1;

    for(i=1;i<n;i++)
    {
        if(v[i]-v[start]>=dis)
        {
            cnt++;

            start=i;
        }
    }

    return cnt;
}


int main()
{
    int t;

    cin >> t;

    int cow,p,l,r,mid,i,temp,res;

    while(t--)
    {
        cin >> n >> cow;

        for(i=0;i<n;i++)
        {
            cin >> p;

            v.push_back(p);
        }

        sort(v.begin(),v.end());

        l=1;

        r=v[n-1]-v[0];

        res=0;

        while(l<=r)
        {
            mid=l+((r-l)/2);

            temp=cowcount(mid);

            

            if(temp<cow)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;

                res=mid;
            }
        }

        cout << res << endl;

        v.clear();

    }

    return 0;
}
