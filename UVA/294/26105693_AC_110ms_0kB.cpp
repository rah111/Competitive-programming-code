#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,a,b,l,p,cnt;

    cin >> test;

    while(test--)
    {

        cin >> a >> b;

        p=0;



        for(int i=a;i<=b;i++)
        {
             cnt=0;

            for(int j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    cnt++;

                }
            }

            int k=sqrt(i);

            k=k*k;

            if(k==i)
            {
                cnt=(cnt*2)-1;
            }
            else
            {
                cnt=cnt*2;
            }

            if(cnt>p)
            {
                p=cnt;
                l=i;
            }
        }

        cout <<"Between " << a << " and " <<b <<", " << l <<" has a maximum of " << p << " divisors." << endl;
    }

    return 0;
}
