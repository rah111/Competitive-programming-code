#include <bits/stdc++.h>

using namespace std;

int j=0;

int p;

int counter(int *t,int o){

    j=j+1;



    if(j>o){

        return 0;
    }

    else{

        return p = *t + counter(t+1,o);
    }


}

int main(){

    int test;

    int i,p,*b,r=1;

    cin >> test;


    while (test--){

        cin >> p;

        int a[p];

        for(i=1;i<=p;i++){

            cin >> a[i];
        }

        b=&a[1];

        int c=counter(b,p);

        cout << "Case "<<r <<": " << c <<endl;

        r++;

        j=0;
    }

    return 0;

}
