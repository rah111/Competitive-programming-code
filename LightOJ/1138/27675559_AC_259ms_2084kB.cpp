#include<bits/stdc++.h>

using namespace std;

long countTrailingZerosOfFactorial(long n)
{
    long cnt = 0;

    long x;

    for(x=5;x<=n;x=x*5)
    {
        cnt=cnt+(n/x);
    }

    return cnt;
}

long findMinimumValueWithKTrailingZeros(int k)
{
    long l=0;
    long r=1e12;
    long res=-1;
    long mid,zeros;

    while(l<=r)
    {
        mid=l+(r-l)/2;

        zeros=countTrailingZerosOfFactorial(mid);

        if(zeros>=k)
        {
            res=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    if(countTrailingZerosOfFactorial(res) == k) return res;
   else return -1;

}

int main()
{
    int t,q;

    cin >> t;

    int ts=0;

    while(t--)
    {
        cin >> q;

        ts++;

        if(findMinimumValueWithKTrailingZeros(q)!=-1)
        {
            printf("Case %d: %d\n",ts,findMinimumValueWithKTrailingZeros(q));
        }
        else
        {
            printf("Case %d: impossible\n",ts);
        }
    }


    return 0;
}
