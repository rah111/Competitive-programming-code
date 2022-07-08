#include<bits/stdc++.h>

using namespace std;

int main()
{
    string p;

    cin >> p;

    int k,cnt=0,i;

    k=p.size();


        for(i=0;i<k/2;i++)
        {
            if(p[i]!=p[k-i-1])
            {
                cnt++;
            }
        }


    if(cnt==1)
    {
        cout << "YES" << endl;
    }
    else if(cnt==0 && k%2!=0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;


    return 0;

}
