#include<bits/stdc++.h>

using namespace std;

int zeroCount(int n)
{
    while(n!=0)
    {
        if(n%10==0)
        {
            return 1;
        }

        n=n/10;
    }

    return 0;
}

int main()
{
    int a[1000009]={0};

    int i;
    
    a[0]=1;

    for(i=1;i<=1000000;i++)
    {
        a[i]=a[i-1]+zeroCount(i);

        
    }

    

    int t;

    cin >> t;

    int k,b;

    while(t--)
    {
        cin >> k >> b;
        
        if(k==0)
        {
        	cout << a[b] << "/" << b+1 << endl;
        }
        else
        {
        	cout << a[b]-a[k-1] << "/" << (b-k)+1 << endl;
        }
        
    }


    return 0;


}
