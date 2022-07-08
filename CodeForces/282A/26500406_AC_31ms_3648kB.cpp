#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int

using namespace std;

int main()
{
    int n;

    cin >> n;

    string st;

    int x=0;

    while(n--)
    {
        cin >> st;

        if(st=="++X")
        {
            ++x;
        }
        else if(st=="X++")
        {
            x++;
        }
        else if(st=="--X")
        {
            --x;
        }
        else if(st=="X--")
        {
            x--;
        }


    }

    cout << x << endl;


    return 0;
}
