#include<bits/stdc++.h>

using namespace std;

map<int,int>p;

void factorize(int n)
{
    int i;
    int len=sqrt(n);

    for(i=2;i<=len;i++)
    {
        if(n%i==0)
        {
            p[i]++;

            while(n%i==0)
            {
                n=n/i;
            }

            len=sqrt(n);
        }
    }

    if(n!=1)
    {
        p[n]++;
    }
}

int main()
{
    int n;

    cin >> n;

    int k,i,res;

    for(i=0;i<n;i++)
    {
        cin >> k;

        factorize(k);
    }


    res=1;


    for (map<int,int>::iterator it=p.begin(); it!=p.end(); ++it)
    {
        res=max(res,(*it).second);
    }

    cout << res << endl;

    return 0;
}
