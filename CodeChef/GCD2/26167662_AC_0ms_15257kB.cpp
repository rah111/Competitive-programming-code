#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{


    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int test;

    cin >> test;

    string p;

    int c,i,j,b,cnt;

    while(test--)
    {

        cin >> b;

        cin >> p;

        j=0;
        cnt=0;

        

    if(b==0 )
    {
        cout << p << endl;
    }

    else
    {







        for(i=0; i<p.size(); i++)
            {
                c=p[i]-'0' ; //character to integer conversion

                j=(j*10)+c;

                j=j%b;


            }

            cout << gcd(b,j) << endl;
        }

    }



    return 0;
}
