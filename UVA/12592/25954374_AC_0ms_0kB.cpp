#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    
    cin >> n;
    
    getchar();
    
    string sl1,sl2,sl3;
    
    map<string,string> p;
    
    while(n--)
    {
        getline(cin,sl1);
        getline(cin,sl2);
        
        p[sl1]=sl2;
        
    }
    
    cin >> k;
    
    getchar();
    
    while(k--)
    {
        getline(cin,sl3);
        
        cout << p[sl3] << endl;
    }
    return 0;
}