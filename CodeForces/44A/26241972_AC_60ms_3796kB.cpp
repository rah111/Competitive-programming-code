#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<pair<string,string> > st;

    int n;

    cin >> n;

    string p,k;

    while(n--)
    {
        cin >> p >> k;



        st.insert({p,k});

    }

    cout << st.size() << endl;

    return 0;
}
