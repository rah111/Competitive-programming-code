#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;

    int i,j=0;

    stack <char> st;

    getline(cin,s);

    getline(cin,t);


    for(i=0;i<s.size();i++)
    {
        st.push(s[i]);
    }



    while(!st.empty())
    {
        if(t[j]==st.top())
        {
            st.pop();

            j++;
        }
        else
            break;


    }

    if(!st.empty())
    {
        cout << "NO" << endl;
    }

    else
        cout << "YES" <<endl;

    return 0;

}
