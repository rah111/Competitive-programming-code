#include <bits\stdc++.h>

using namespace std;

int main(){

int n,k,i,c=0,j;

cin >> n >> k;

int a[n];

for (i=0;i<n;i++){

    cin >> j;

    a[i]=j;}

    for(i=0;i<n;i++){

        if(a[i]>k){

            break;
        }

        else
             c=c+1;
    }

    if(i<(n-1)){
    for(i=n-1;i>=0;i--){

        if(a[i]>k){

            break;
        }

        else
            c=c+1;
    }}

    cout << c << endl;
return 0;}
