#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    long long a[n],b[n],r=0,j;



    int i=-1,k;

    k=n;



    while(k--)
    {
        cin >>j ;

        i++;



        a[i]=j;




    }



b[i]=0;





    while(i>0)
    {

        r=max(r,a[i]);

        if(a[i-1]<=r)
        {
            b[i-1]=abs(a[i-1]-r)+1;
        }

        else

            b[i-1]=0;

        i--;
    }



    while(i<n)
    {


        cout <<b[i]<< " " ;

        i++;
    }
    return 0;
}
