
#include<bits/stdc++.h>

using namespace std;

int main()
{




    string p;

    char a;

    cin >> p ;

    int i,d,flag=0;





    for(i=1;i<p.size();i++)
    {
        d=p[i];



        if(d>=97 && d<=122)
        {
            flag=1;

            break;


        }


        else
            flag=0;


    }

    if(flag==1)
    {
        cout << p << endl;
    }
    else
    {
        for(i=0;i<p.size();i++)
        {
            d=p[i];

            if(d>=97 && d<=122)
            {
                a=char(d-32);

                cout << a ;

            }
            else if(d>=65 && d<=90)
            {
                 a=char(d+32);

                 cout << a ;

            }
        }



    }

    return 0;
}
