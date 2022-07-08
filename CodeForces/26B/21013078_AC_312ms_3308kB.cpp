#include <bits/stdc++.h>

using namespace std;

int main()
{
    string p;

    getline(cin,p);

    stack<char> t;

    char k;

    for(int i=0;i<p.size();i++)
    {
        k=p[i];



        if(t.size()==0)
        {
            t.push(k);
        }

        else
        {
             if(t.top()=='(' && k==')')
             {
                 t.pop();



             }

             else
                t.push(k);

        }



    }

    cout << p.size()-t.size() << endl;

    return 0;
}
