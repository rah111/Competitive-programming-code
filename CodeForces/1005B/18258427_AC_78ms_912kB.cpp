#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;

    stack <char> t1,t2;


    getline(cin ,s1);

    getline (cin,s2);

    int i,l,c=0;

    for(i=0;i<s1.size();i++)
    {
        t1.push(s1[i]);
    }

     for(i=0;i<s2.size();i++)
    {
        t2.push(s2[i]);
    }


    l=min(t1.size(),t2.size());

    while(l>0)
    {
        if(t1.top()==t2.top())
        {


            t1.pop();
            t2.pop();
        }

        l--;
    }

    cout << t1.size()+t2.size() <<endl;


    return 0;
}
