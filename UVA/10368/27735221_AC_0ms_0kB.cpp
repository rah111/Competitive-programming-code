#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,cnt=0;

    while(cin >> a >> b)
    {
        if(a==0 && b==0)
        {
            break;
        }

        cnt=0;

        while(true)
        {
            cnt++;

            if(a==0 || b==0)
            {
                break;
            }

            if(b>a)
            {
                swap(a,b);
            }

            if(a/b>1 || a%b==0)
            {
                break;
            }

            a=a%b;
        }

        if(cnt%2!=0)
        {
            cout << "Stan wins" << endl;
        }
        else
        {
            cout << "Ollie wins" << endl;
        }
    }
    return 0;
}
