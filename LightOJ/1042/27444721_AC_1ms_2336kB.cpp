#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<int>v;

void convertBinary (int n)
{
    int p;

    while(n!=0)
    {
        p=n%2;

        n=n/2;

        v.push_back(p);

        //cout << p <<endl;
    }

    v.push_back(0); // 0 is added to increase bit
                    // 7-> 111 and 11->1011

    reverse(v.begin(),v.end()); // to store the bits in correct order
                                // before reverse 6->011 , after reverse 6->110

}

ll convertDecimal()
{
    ll p=0;

    int i,k=0;

    for(i=v.size()-1;i>=0;i--)
    {
        p=p+(v[i]*(pow(2,k)));

        k++;
    }

    return p;
}

int main()
{
    int t,tr=0,ans,i,n;

    cin >> t;

    while(t--)
    {
        cin >> n;

        tr++;

        convertBinary(n);

        next_permutation(v.begin(),v.end());

        ll ans= convertDecimal();

        printf("Case %d: %d\n",tr,ans);

        v.clear();


    }

    return 0;
}
