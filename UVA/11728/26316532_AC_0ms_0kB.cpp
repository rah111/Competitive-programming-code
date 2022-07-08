#include<bits/stdc++.h>

using namespace std;

int arr[1009];

void SumOfFactors()
{
    int i,j,l;

    for(i=1; i<=1000; i++)
    {
        l=i/2;

        arr[i]=0;

        for(j=1; j<=l; j++)
        {
            if(i%j==0)
            {
                arr[i]=arr[i]+j;
            }
        }

        arr[i]=arr[i]+i;
    }


}

int main()
{
    SumOfFactors();

    int n,cnt=1,i;

    bool flag;

    while(true)
    {
        cin >> n;

        flag=false;

        if(n==0)
        {
            break;
        }
        else
        {
            for(i=1000; i>=1; i--)
            {
                if(arr[i]==n)
                {
                    flag=true;

                    cout << "Case "<< cnt++ << ": " << i << endl;

                    i=0;


                }


            }

            if(flag==false)
            {
                cout << "Case "<< cnt++ << ": " << -1 << endl;
            }

        }
    }


    return 0;
}
