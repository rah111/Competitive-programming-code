#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    double x1,y1;

    cin >> n >> x1 >> y1;

    double p;

    double x,y;

    set <double > q;

    bool flag=0;

    while(n--)
    {
        cin >> x >> y;

        if(x!=x1)
        {
            p =(y1-y)/(x1-x);

            q.insert(p);
        }
        else
        {
            flag=1;
        }

    }

    if(flag==1)
    {
        cout << q.size()+1 << endl;
    }
    else
    {
        cout << q.size() << endl;
    }




    return 0;
}
