#include<bits/stdc++.h>

using namespace std;

int main()
{
    string l;

    getline(cin,l);

    int i,c=1,m=0;

    for(i=0;i<l.size()-1;i++)
    {
        if(l[i]==l[i+1])
        {
            c++;
        }

        if(m<c)
        {
            m=c;
        }

        if(l[i]!=l[i+1])
        {
            c=1;
        }
    }

    if(m>=7)

    cout << "YES"<< endl;

    else

        cout << "NO" << endl;
    return 0;
}
