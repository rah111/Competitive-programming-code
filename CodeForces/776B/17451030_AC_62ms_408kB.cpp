

#include <bits/stdc++.h>

using namespace std;


int n=100010;

int a[100010];

void sieve(){



    int i,j;



    for(i=4;i<=n;i=i+2){

        a[i]=0;
    }

    for(i=3;i<=n;i=i+2){

        a[i]=1;
    }

    for(i=3;i<=sqrt(n);i=i+2){

        if(a[i]==1){

            for(j=i*i;j<=n;j=j+(2*i)){

                a[j]=0;
            }
        }
    }

    a[2]=1;

    /*primes[k]=2;

    for(i=3;i<=n;i=i+2){

        if(a[i]==1){

            k++;



            primes[k]=i;
        }
    }*/

}

int main(){

    sieve();

    int q;

    int i;

    cin >> q;

    if(q==1){

        cout << 1 <<endl;

        cout << 1 <<endl;
    }

    else if(q==2){

        cout << 1 << endl;

        cout <<1 << " " <<1<<endl;
    }

    else{

    cout << 2 <<endl;

    for(i=1;i<=q;i++){

            if(a[i+1]==1){

                cout << 1 << " ";
            }

            else

                cout << 2 <<" ";


    }}

    return 0;

}
