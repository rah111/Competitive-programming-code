#include <bits\stdc++.h>

using namespace std;

int main(){

int a[4];

int i;

for(i=0;i<4;i++){

    cin >> a[i];
}


sort(a,a+4);




int k=a[0]+a[1];
int m=a[1]+a[2];

if(k>a[2] || k>a[3] || m >a[3]){

    cout << "TRIANGLE" << endl;
}

else {

    if(k==a[2] || k==a[3] || m==a[3]){

        cout << "SEGMENT" << endl;
    }

    else

        cout << "IMPOSSIBLE" <<endl;
}

return 0;}