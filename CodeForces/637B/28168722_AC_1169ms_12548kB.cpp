#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    stack<string> st;

    map<string,bool> p;

    int i;

    string s;

    for(i=0;i<n;i++)
    {
        cin >> s;

        st.push(s);
    }

    for(i=0;i<n;i++)
    {
        s=st.top();

        st.pop();

        if(p[s]==0)
        {
            cout << s << endl;

            p[s]=1;
        }
    }

    return 0;
}
