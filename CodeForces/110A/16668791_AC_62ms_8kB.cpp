#include<bits/stdc++.h>

using namespace std;

int main(){

long long n;

cin >> n;

int digit=0,count =0;

while(n>0){

    digit=n%10;

    if(digit==4 || digit==7){

        count=count+1;

        
    }

    n=n/10;

    }



    if(count==7 || count==4 )

        cout << "YES" << endl;

    else

        cout << "NO" << endl;

        return 0;
}