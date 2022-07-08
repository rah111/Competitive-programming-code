#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    scanf("%d",&test);

    int n,k,p,q;

    while(test--)
    {
        scanf("%d%d",&n,&k);

        if(k>n)
        {
            cout << "NO" << endl;
        }
        else if(k==n)
        {
            cout << "YES" << endl;

            while(k--)
            {
                cout << 1 << " ";
            }

            cout << endl;
        }
        else if(k<n)
        {
            p=n-(k-1);

            q=n-((k-1)*2);


            if(p%2!=0 && p>0)
            {
                cout << "YES" << endl;

                k--;

                while(k--)
                {
                    cout << 1 << " ";
                }

                cout << p << endl;

                continue;
            }

            if(q%2==0 && q>0)
            {
                cout << "YES" << endl;

                k--;

                while(k --)
                {
                    cout << 2 << " ";
                }

                cout <<  q << endl;

                continue;
            }

            cout << "NO" << endl;
        }


    }

    return 0;

}
