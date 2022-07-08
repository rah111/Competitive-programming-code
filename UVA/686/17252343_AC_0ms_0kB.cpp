#include <bits/stdc++.h>

using namespace std;

int si[100010];

int a[100010];

void sieve(){

    memset(a,0,sizeof(a));

    int i,k=1,j;

    si[k]=2;

    for(i=4;i<=100000;i++){

        a[i]=0;
    }

    for(i=3;i<=100000;i++){

        a[i]=1;
    }

    for(i=3;i<=sqrt(100000);i++){

        if(a[i]==1){

            for(j=i*i;j<=100000;j=j+(2*i)){

                a[j]=0;
            }
        }
    }

    for(i=3;i<=100000;i=i+2){

        if(a[i]==1){ k++;

            si[k]=i;
        }
    }


}

bool prime(int n){

    int i,l;

    l=sqrt(n)+1;

    for(i=1;;i++){

        if(si[i]<=l && n%si[i]==0){

            return false;

            break;
        }

        if(si[i]>l){

            return true;

            break;
        }
    }

}

int main(){

    int i,p,s,d,c=0;

    sieve();

    while(true){

        cin >> p;

        if(p==0){

            break;
        }

        else if(p==4){

            cout << 1 << endl;
        }

        else{ s=p/2;

            for(i=1;si[i]<=s;i++){

                d=p-si[i];

                if(prime(d)==true){

                    c++;

                }
            }
           cout << c << endl;

        }



        c=0;




    }



    return 0;

}


