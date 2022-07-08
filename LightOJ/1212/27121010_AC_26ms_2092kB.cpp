#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t ;

    int c=0;

    deque <  int > p;

    while(t--)
    {
        int n,m,x;

        cin >> n >> m;

        string st;

        c++;

        printf("Case %d:\n",c);

        while(m--)
        {
            cin >> st;

            if(st=="pushLeft")
            {
                cin >> x;

                if(p.size()<n)
                {
                    p.push_front(x);

                    printf("Pushed in left: %d\n",x);
                }
                else
                {
                    cout << "The queue is full" << endl;
                }


            }
            else if(st=="pushRight")
            {
                cin >> x;

                if(p.size()<n)
                {
                    p.push_back(x);

                    printf("Pushed in right: %d\n",x);
                }
                else
                {
                    cout << "The queue is full" << endl;
                }


            }
            else if(st=="popLeft")
            {
                if(!p.empty())
                {
                    x=p.front();

                    p.pop_front();

                    printf("Popped from left: %d\n",x);
                }
                else
                {
                    printf("The queue is empty\n");
                }
            }
            else if(st=="popRight")
            {
                if(!p.empty())
                {
                    x=p.back();

                    p.pop_back();

                    printf("Popped from right: %d\n",x);
                }
                else
                {
                    printf("The queue is empty\n");
                }
            }



        }

        p.clear();
    }

    return 0;
}