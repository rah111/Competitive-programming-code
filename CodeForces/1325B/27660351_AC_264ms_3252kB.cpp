
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    int n,p;

    set<int > st;

    while(t--)
    {
        cin >> n;

        while(n--)
        {
            cin >> p;

            st.insert(p);
        }

        cout << st.size() << endl;
        
        st.clear();
    }
    return 0;
}
