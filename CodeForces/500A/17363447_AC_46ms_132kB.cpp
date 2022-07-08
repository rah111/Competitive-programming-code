#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k,p=1;

    cin >> n >>k;

    int a[n];

    int i;

    for(i=1;i<n;i++){

        cin >> a[i];
    }

    for(i=1;i<=n;i=i+a[i]){

        if(i==k){ p=0;

            cout << "YES" <<endl;

            break;
        }

    }

    if (p==1){

        cout << "NO" <<endl;
    }


    return 0;

}
