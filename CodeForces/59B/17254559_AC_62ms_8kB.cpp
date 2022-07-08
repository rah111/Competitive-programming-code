#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k=0,i,fl=0;

    cin >> n;

    int a[n];

    for(i=0;i<n;i++){

        cin >> a[i];

        k=k+a[i];

    }

    sort(a,a+n);

    if(k%2!=0){

        cout << k <<endl;
    }



    else{

        for(i=0;i<n;i++){

            if(a[i]%2!=0){ fl=1;

                cout << k-a[i] << endl;

                break;
            }


        }

        if(i==n && fl==0){

            cout << 0 << endl;
        }
    }






return 0;}
