#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int> p;

    int q;

    cin >> q;

    char c;

    int id,left=0,right=-1,res;

    while(q--)
    {
        cin >> c >> id;

        if(c=='L')
        {
            left--;

            p[id]=left;
        }

        if(c=='R')
        {
            right++;

            p[id]=right;
        }

        if(c=='?')
        {
            //cout << p[id] <<" " << left << " "<< right << endl;

            //cout << abs(p[id]-left) << " " << abs(p[id]-right) << endl;

            res=min(abs(p[id]-left),abs(p[id]-right));

            printf("%d\n",res);

        }
    }



    return 0;
}
