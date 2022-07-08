#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;

    int i,flg=0;

    cin >> a >> b;

    if(a.size()==b.size())
    {
        for(i=0;i<a.size();i++)
        {
            if(a[i]<b[i])
            {
                flg=1;

                break;
            }
            else if( a[i]>b[i])
            {
                flg=2;

                break;

            }
            else if(a[i]==b[i])
            {
                flg=3;
            }
        }

        if(flg==1)
        {
            cout << "LESS" << endl;
        }
        else if(flg==2)
        {
            cout << "GREATER" << endl;
        }
        else if(flg==3)
        {
            cout << "EQUAL" << endl;
        }
    }
    else if(a.size()>b.size())
    {
        cout << "GREATER" << endl;
    }
    else if(a.size()<b.size())
    {
        cout << "LESS" << endl;
    }

    return 0;
}
