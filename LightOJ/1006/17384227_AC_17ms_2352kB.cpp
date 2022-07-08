#include <bits/stdc++.h>

using namespace std;

long long a,b,c,d,e,f;

long long mark[10009];

long long fn(long long p){

    if(mark[p]!=-1){

        return mark[p];
    }

    if(p<0){

        return 0;
    }



    if(p==0){
     return a;}

    if(p==1) {
    return b;}

    if(p==2) {
    return c;}

    if(p==3){
     return d;}

    if(p==4) {
    return e;}

    if(p==5){
    return f;}



    return mark[p]=(fn(p-1)+fn(p-2)+fn(p-3)+fn(p-4)+fn(p-5)+fn(p-6)) % 10000007;




}

int main(){

    int test,t=0;

    long long n;

    cin >> test;

    while(test--){

         cin >> a >> b>> c>> d>> e>> f >> n;

         memset(mark,-1,sizeof(mark));

         t++;

         cout << "Case " << t <<": " << fn(n)%10000007 <<endl;



            }


    return 0;

}
