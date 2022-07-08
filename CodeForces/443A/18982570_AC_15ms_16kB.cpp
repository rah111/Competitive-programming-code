#include <bits/stdc++.h>

using namespace std;

int main()
{
    string t;

    set < int > p;

    int d=0,i,j;

    getline (cin,t);

    for(i=0;i<t.size();i++)
    {
        if(t.at(i)!=' ' &&  t.at(i)!=',' && t.at(i)!='{' && t.at(i)!='}')
        {
            j=int(t.at(i));

            p.insert(j);
        }
    }

    cout << p.size() << endl;

    return 0;
}
