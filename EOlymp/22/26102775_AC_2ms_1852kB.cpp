#include <bits/stdc++.h>

using namespace std;

bool prime(int x)
{
    int flag=0;

    int i;

    for(i=2;i<=(sqrt(x)+1);i++)
    {
        if(x%i==0)
        {
            flag=1;
        }
    }

    if(flag==0)
    {
        return true;
    }
    else
     return false;



}

int rev(int p)
{
    int n=0,k;

    while(p!=0)
    {
        n=n*10;

        k=p%10;
        p=p/10;

        n=n+k;
    }

    return n;
}

int main()
{
    int a , b;

    cin >> a >> b;

    int z,cnt=0,i;

    for(i=a;i<=b;i++)
    {
        if(i==2 || i==3 || i==5 || i==7)
        {
            cnt++;
        }

        else if(i%2!=0 && i>10 && prime(i)==true)
        {
            z=rev(i);



            if(prime(z)==true)
            {
                cnt++;
            }
        }


    }

    cout << cnt << endl;

    return 0;
}
