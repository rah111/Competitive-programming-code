#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,m=0;

    cin >> i;

    for(j=0;j<i;j++){

        cin>> k>>l;

        if(k%2==0){

            k=k+1;

            while(k<=l){

                 m=m+k;

                 k=k+2;
            }

        }

        if(k%2!=0){

               while(k<=l){

                 m=m+k;

                 k=k+2;
            }

        }

        cout << "Case " <<j+1<<": "<<m<<endl ;

        m=0;
        }

    return 0;
}
