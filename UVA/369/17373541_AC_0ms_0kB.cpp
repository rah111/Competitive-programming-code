#include <bits/stdc++.h>

using namespace std;

long long dp[109][109];

int combination(int n,int r){


    if(dp[n][r]!=-1){

        return dp[n][r];
    }

    if(n==r){

        return dp[n][r]=1;
    }

    if(r==1){

        return dp[n][r]=n;
    }

    long long res=combination(n-1,r-1)+combination(n-1,r);

    return dp[n][r]=res;

}

int main(){

    memset(dp,-1,sizeof(dp));


    int k,p;

    long long c;

    while(true){

            cin >> p >> k;

            if(p==0 && k==0){

                break;
            }

            else{

                c=combination(p,k);

                cout << p << " things taken " << k << " at a time is " << c << " exactly." <<endl;
            }


    }



return 0;}
