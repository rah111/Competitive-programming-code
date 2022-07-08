#include <bits/stdc++.h>


using namespace std;

int gcd(int a,int b){

    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);

}


int main(){

    int n;

    while(true){

        cin >> n;

        if(n==0){

            break;
        }

        else{

            int g=0;

            for(int i=1;i<n;i++){

                for(int j=i+1;j<=n;j++){

                    g=g+gcd(i,j);
                }
            }

            cout << g <<endl;
        }
    }



   return 0;

}

