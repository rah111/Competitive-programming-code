#include <bits/stdc++.h>

using namespace std;

int main(){


    int n,m;

    cin >> n >> m;

    int i,j;

    int k;

    for(i=1;i<=n;i++){

        for(j=1;j<=m;j++){

            if(i%2!=0){

                cout << "#" ;
            }

            else{

            k=i/2;

            if(k%2!=0){

               if(j==m){

                cout << "#" ;
               }

               else

                cout << ".";


            }

            if(k%2==0){

                if(j==1){

                    cout << "#";
                }

                else

                    cout << ".";
            }

            }



        }

        cout << endl;
    }



return 0;}
