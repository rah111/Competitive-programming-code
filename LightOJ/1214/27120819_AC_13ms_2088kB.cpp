#include<bits/stdc++.h>

using namespace std;

int main()
{


    int test;

    cin >> test;

    string p;

    long long int b;

    int i,c,l=0,k;

    while(test--)
    {
        cin >> p;

        cin >> b;

        if(p[0]=='-')
        {
            k=1;
        }
        else
        {
            k=0;
        }

        if(b<0)
        {
            b=b*(-1);
        }

        long long int j=0,c;



        for(i=k;i<p.size();i++)
        {
            c=p[i]-'0' ; //character to integer conversion

            j=(j*10)+c;

            j=j%b;


        }

        l++;

        if(j==0)
        {
            cout <<"Case " << l << ": "<< "divisible" <<endl;
        }
        else
        {
            cout <<"Case " << l << ": "<< "not divisible" <<endl;
        }


    }

    return 0;
}