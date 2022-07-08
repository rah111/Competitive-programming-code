#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m , n;

    cin >> m >> n;

    int i,j;

    int p=n-1,l=0;

    for(i=1;i<=m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2!=0)
            {
                cout << "#" ;


            }

            if(i%2==0)
            {
                if(j==p && l==0){

                        cout << "#";

                l=1;



                    if(j==n-1)
                    {
                        p=0;
                    }

                    else if(j==0)
                    {
                        p=n-1;
                    }


                }

                else

                    cout << "." ;

            }


        }

        cout << endl;

        l=0;
    }
    return 0;
}
