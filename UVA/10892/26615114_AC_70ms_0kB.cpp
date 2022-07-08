#include<bits/stdc++.h>

#define ll long long int

using namespace std;

ll gcd(ll a, ll b) {
    if(a%b==0) return b;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}


int main()
{
    ll n,len;

    int i,j,c;

    vector <ll > factors;

    while(true)
    {
        cin >> n;

        if(n==0)
        {
            break;
        }
        else
        {
            len=sqrt(n);

            for(i=1;i<=len;i++)
            {
                if(n%i==0)
                {
                    factors.push_back(i);

                    if((n/i)!=i)
                    {
                        factors.push_back(n/i);
                    }

                }
            }

            sort(factors.begin(),factors.end()); // cause in a pair(a,b)there must be(a<b)

            c=0;

            for(i=0;i<factors.size();i++)
            {
                for(j=i+1;j<factors.size();j++)
                {
                    if(lcm(factors[i],factors[j])==n)
                    {
                        c++;
                    }



                }

                // beacuse pair (n,n) lcm=n

                    if(i==(factors.size()-1))
                    {
                        c++;
                    }
            }

            cout << n <<" " << c << endl;

            factors.clear();

        }
    }

    return 0;
}

