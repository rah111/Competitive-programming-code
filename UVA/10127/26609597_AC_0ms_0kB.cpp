#include<bits/stdc++.h>

using namespace std;

int digit(int n)
{
    int num=1;

    int cnt=1;

    while(num%n!=0)
    {
        num=((num*10)+1)%n;

        cnt++;

    }

    return cnt;
}

int main()
{
    int n;

    while(cin >> n)
    {
        cout << digit(n) << endl;
    }


    return 0;
}
