#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,k,i,countK,j;

    cin >> n >> a >> b;

    vector < int > p;

    countK=0;

    j=0;

    for(i=0; i<n; i++)
    {
        cin >> k;

        countK=countK+k;

        if(i==0)
        {
            j = (k*a);
        }
        else
        {
            p.push_back(k);
        }



    }

    if((j/countK)>=b)
    {
        cout << 0 << endl;
    }

    else
    {
        sort(p.begin(),p.end(),greater<int>());

        for(i=0; i<p.size(); i++)
        {
            countK=countK-p[i];

            if((j/countK)>=b)
            {
                cout << i+1 << endl;

                i=p.size()+1;
            }

        }


    }







    return 0;
}
