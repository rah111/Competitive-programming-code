#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;



    int i,a,b,c,T=0;

    string x;

    map<string,int> mp;


    while(cin >> n)
    {

if (T > 0) printf("\n"); // Space in-between groups.
        T++;


    string p[n];

    for(i=0;i<n;i++)
    {
        cin >> x;

        p[i]=x;
    }



    for(i=0;i<n;i++)
    {
        cin >> x;

        cin >> a >> b;



        if(b>0)
        {
            c=a/b;
        }

        mp[x]=mp[x]-(c*b); // twist 200/3=66.66 , so c=66 , so he spent 66*3=198

        while(b--)
        {
            cin >> x;

            mp[x]=mp[x]+c;
        }
    }




    for(i=0;i<n;i++)
    {
        cout << p[i] << " " << mp[p[i]] << "\n";
    }

mp.clear(); // cost me 2 hours extra...
            // cause there could be similar names in 
            // different test cases

    }

    return 0;
}
