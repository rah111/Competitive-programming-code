#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string st;

    cin >> st;



    char ch;

    int cnt=0;

    for(int i=0;i<st.size();i++)
    {
        if(i==0)
        {
            ch=st[i];


        }
        else
        {
            if(ch!=st[i])
            {
                ch=st[i];
            }
            else
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
