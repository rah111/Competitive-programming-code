#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int c=0;

    while(test--)
    {
        c++;

        cout << "Case " << c << ":" << endl;

        stack<string>b;
        stack<string>f;

        b.push("http://www.lightoj.com/");

        while(true)
        {
            string st,ch,p;

            cin >> st;

            if(st=="BACK")
            {
                if(b.size()<=1)
                {
                    cout << "Ignored\n";
                }
                else
                {
                    p=b.top();
                    f.push(p);
                    b.pop();
                    p=b.top();

                    cout << p << endl;

                }
            }
            else if(st=="FORWARD")
            {
                if(f.size()==0)
                {
                    cout << "Ignored\n";
                }
                else
                {
                    p=f.top();

                    cout << p << endl;

                    b.push(p);

                    f.pop();
                }
            }
            else if(st=="QUIT")
            {
                break;
            }
            else if(st=="VISIT")
            {
                cin >> ch;

                b.push(ch);

                cout << b.top() << endl;

                while(!f.empty())
                {
                    f.pop();
                }
            }
        }
    }
    return 0;
}
