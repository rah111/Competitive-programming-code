#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;

    int link=0;

    int pearl=0;

    int i;

    cin >> st;

    for(i=0;i<st.size();i++)
    {
        if(st[i]=='-')
        {
            link++;
        }
        else
        {
            pearl++;
        }
    }

    if(pearl==0)
    {
        cout << "YES" << endl;
    }

   else if(link%pearl==0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
