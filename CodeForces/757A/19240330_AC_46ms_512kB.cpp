#include <bits/stdc++.h>

using namespace std;

int main()
{
    string t;

    stack<int> B;
    stack<int> u;
    stack<int> l;
    stack<int> b;
    stack<int> s;
    stack<int> a;
    stack<int> r;






    getline(cin,t);

    int n=0;

    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='B')
        {
            B.push(2);
        }

        else if(t[i]=='u')
        {
            u.push(2);
        }

         else if(t[i]=='l')
         {
             l.push(2);


         }

          else if(t[i]=='b')
          {
              b.push(2);
          }
           else if(t[i]=='a')
           {
               a.push(2);
           }
            else if(t[i]=='s')
            {
                s.push(2);
            }

             else if(t[i]=='r')
             {
                 r.push(2);
             }
    }



    while(!B.empty() && !u.empty() && !l.empty() && !b.empty() && !a.empty() && !s.empty() && !r.empty() )
    {

        if(u.size()<2 || a.size()<2)
        {
            break;
        }

        else
        {
            n++;

            B.pop();
            u.pop();
            l.pop();
            b.pop();
            a.pop();

            s.pop();
            a.pop();
            u.pop();
            r.pop();
        }


    }

    cout << n << endl;




    return 0;
}
