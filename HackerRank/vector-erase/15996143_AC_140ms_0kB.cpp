#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

vector<int > v;

vector<int> :: iterator i;

int r,k,j;

cin >> k;

for(r=0;r<k;r++){

        cin >> j;

    v.push_back(j);
}

int e;

cin >> e;

v.erase(v.begin()+(e-1));

int o,p;

cin >> o;
cin >> p;

v.erase(v.begin()+(o-1),v.begin()+(p-1));


int s=v.size();

cout << s << endl;

for(i=v.begin();i!=v.end();i++){

    cout << *i << " ";
}


}