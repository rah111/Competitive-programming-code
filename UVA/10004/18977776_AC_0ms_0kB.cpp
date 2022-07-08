#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,edge,x,y;

    while (cin>>n ,n!=0){

        cin >> edge;

        for(int i=0;i<edge;i++){

            cin >> x >> y;
        }

        if(n>edge)
            cout <<"BICOLORABLE."<<endl;

            else if(n==edge && n%2==0)

                cout <<"BICOLORABLE."<<endl;

        else
            cout << "NOT BICOLORABLE."<<endl;
    }

}