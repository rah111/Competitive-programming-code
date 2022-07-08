#include <bits/stdc++.h>

int dp[2009][2009];

int n;

int weight[2009];
int price[2009];

using namespace std;

int knapSack(int index,int rem){

    if(dp[index][rem]!=-1){

        return dp[index][rem];
    }

    if(index==n+1){

        return 0;
    }

    int r2=0;



    if(rem-weight[index]>=0){

        r2=price[index]+knapSack((index+1),rem-weight[index]);
    }

    int r1=knapSack(index+1,rem);

    return dp[index][rem]=max(r1,r2);

}

int main(){

    memset(dp,-1,sizeof(dp));

    int s;

    cin >> s >> n;


    int i;

    for(i=1;i<=n;i++){

        cin >> weight[i];
        cin >> price[i];
    }




    cout << knapSack(1,s) <<endl;




return 0;}
