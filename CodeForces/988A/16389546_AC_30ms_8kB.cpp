#include <bits/stdc++.h>

using namespace std;

int main(){

set<int> s;

int n,k,j,i;

cin >> n >>k;

int a[n];

for(i=0;i<n;i++){

cin >> j;

a[i]=j;

s.insert(j);

}

set<int> :: iterator it;

int l,c=0,f;

l=s.size();

if(l>=k)
{
    cout << "YES" << endl;

    for(it=s.begin();it!=s.end();it++){

        f= *it;

        for(i=0;i<n;i++){

            if(f==a[i] && c<k){ c=c+1;

            cout << i+1 << " " ;

                break;
            }
        }
    }

}

else
    cout << "NO" << endl;




return 0;}