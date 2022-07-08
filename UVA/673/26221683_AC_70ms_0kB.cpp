#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    string p;

    stack<char> st;

    char ch;

    int i;

    getchar();

    while(test--)
    {


        getline(cin,p);

        for(i=0; i<p.size(); i++)
        {
            ch=p[i];

            if(ch=='(' || ch==')' || ch==']' || ch=='[')
            {



                if(ch==')')
                {
                    if(!st.empty() && st.top()=='(')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(ch);
                    }
                }
                else if(ch==']')
                {
                    if(!st.empty() && st.top()=='[')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(ch);
                    }

                }
                else
                {
                    st.push(ch);
                }
            }
        }

        if(st.empty())
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;

        while(!st.empty())
        {
            st.pop();
        }

        p.clear();
    }
    return 0;
}
