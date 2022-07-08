#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k=0;
    
    cin >> n >> m;
    
    while(m>n)
    {
        if(m%2==0)
        {
            m=m/2;
            
            k++;
        }
        
        else
        {
            m++;
            
            k++;
        }
    }
    
    cout << abs(k+n-m) << endl;
    
        return 0;
}
