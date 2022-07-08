#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;

    cin >> st;

    int i,cnt=0,k;

    k=st.size();

    for(i=0;i<k;i++)
    {
        if(st[i]=='a')
        {
            cnt++;
        }

    }


        if(cnt>=((k/2)+1))
        {
            cout << k << endl;
        }
        else
        {
            cout << ((cnt*2)-1) << endl;
        }


    return 0;
}
