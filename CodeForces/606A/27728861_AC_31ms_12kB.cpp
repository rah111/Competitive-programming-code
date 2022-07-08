#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    int x,y,z;

    long long int cnt=0;



    cin >> a >> b >> c >> x >> y >> z;

    if(a>=x)
    {
        cnt=cnt+((a-x)/2);
    }
    if(b>=y)
    {
        cnt=cnt+((b-y)/2);
    }
    if(c>=z)
    {
        cnt=cnt+((c-z)/2);
    }
    if(a<x)
    {
        cnt=cnt-(x-a);
    }
    if(b<y)
    {
        cnt=cnt-(y-b);
    }
    if(c<z)
    {
        cnt=cnt-(z-c);
    }

    if(cnt<0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }


    return 0;
}
