#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int x, p,l,j,k,m,cnt;

    while(true)
    {


        cin >> x >> p;

        if(x==0 && p==0)
        {
            break;
        }
        else
        {
             m=0;
             cnt=0;
            while(x!=0 || p!=0)
            {


                j=x%10;
                k=p%10;

                l=j+k+m;

                if(l>9)
                {
                    cnt++;

                    m=1;

                    
                }
                else
                {
                    m=0;
                }

                x=x/10;
                p=p/10;
            }
        }

        if(cnt==0)
        {
            cout << "No carry operation." << endl;
        }
        else if(cnt==1)
        {
            cout << cnt << " carry operation." << endl;

        }
        else

        cout << cnt << " carry operations." << endl;




    }
    return 0;
}
