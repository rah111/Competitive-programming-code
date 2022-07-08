#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    vector <int> v;

    int n,k,i,j;

    cin >> n;

    for( i=0;i<n;i++){

    cin >> k;

    v.push_back(k);

    }


    sort(v.begin(),v.end());

    for( j=0;j<v.size();j++){

        cout << v[j] << " ";
    }

    return 0;

}