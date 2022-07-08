#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string a;

    stack<char>s;

    cin >> a;



    for(int i=0; i<a.size(); i++)
    {
        if(!s.empty() && s.top()=='(' && a[i]==')' )
        {

            s.pop();
        }
        else
        {
            s.push(a[i]);
        }


    }


    cout<<a.size()-s.size()<<endl;



    return 0 ;
}
