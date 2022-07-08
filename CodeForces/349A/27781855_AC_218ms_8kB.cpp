#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;

    cin >> n;

    bool flg=0;

    int cnt=0;

    int a=0,b=0,c=0;

    while(n--)
    {
        cin >> k;

        if(k==25)
        {
            a++;
        }
        else if(k==50)
        {
            if(a==0)
            {
                flg=1;

            }
            else
            {
               a--;

               b++;
            }
        }
        else if(k==100)
        {

             if(b>=1 && a>=1)
            {
                a--;
                b--;

                c++;
            }
            else if(a>=3 )
            {
                a=a-3;

                c++;
            }


            else
            {
                flg=1;
            }
        }



    }

    if(flg==0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
