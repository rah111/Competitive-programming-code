#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    stack< int> d;

    int t;

    cin >> t ;

    int p;

    int n;

    while(t--)
    {
        cin >> p;

        if(p==1)
        {

            cin >> n;

            d.push(n);
        }
        else if(p==2)
        {

            if(!d.empty())
            {
                d.pop();
            }

        }
        else if(p==3)
        {


            if(!d.empty())
            {
                cout << d.top() << "\n";
            }

            else
            {
                cout << "Empty!\n" ;
            }
        }
    }


    return 0;
}
