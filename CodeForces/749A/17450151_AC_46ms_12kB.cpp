
#include <bits/stdc++.h>

using namespace std;



int main(){

    int i;



    int p;

    int k;

    cin >> p;

    if(p==3){

        cout << 1 <<endl;

        cout << 3 <<endl;
    }

    else if(p%2==0){

            cout << p/2 <<endl;

        for(i=0;i<(p/2);i++){

            cout << 2  << " ";
        }
    }

    else if (p>3 && p%2!=0){


        k=p-3;

        if(k%2==0){

            cout << (k/2)+1 <<endl;

            cout << 3 << " ";

            for(i=0;i<(k/2);i++){

                cout << 2 << " " ;
            }
        }



    }

return 0;}
