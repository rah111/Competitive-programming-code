#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,t;

    cin >> n;

    stack <int > st;

    int c=0,k=0,j=0;

    while(n!=0)
    {
        t=n%10;

        if(t!=4 && t!=1)
        {
            cout << "NO" << endl;

            c=1;

            break;
        }

        else
        {

            st.push(t);
        }

        n=n/10;

    }

    if(c==0)
    {
        if(st.top()!=1)
        {
            k=1;
            cout << "NO" << endl;
        }
        else
        {
            while(!st.empty())
            {
                if(st.top()==1)
                {
                    j=0;
                    st.pop();
                }

                else if(st.top()==4 && j<2)
                {
                    j++;

                    

                    st.pop();
                }
                else if(st.top()==4 && j==2)
                {
                    k=1;

                    cout << "NO" << endl;

                    break;
                }



            }


        }
    }

    if(c==0 && k==0)
    {
        cout << "YES" << endl;
    }



    return 0;
}
