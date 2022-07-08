#include<bits/stdc++.h>

using namespace std;



int main()
{
    string st;

    int k;

    cin >> k;

    cin >> st;


    long long int c, d=0,m=0;

    int i;

    for(i=st.size()-1;i>=0;i--)
    {
        c=st[i]-48;

        m=m+(c*(pow(k,d)));

        d++;


    }

    cout << m << endl;

    return 0;
}
