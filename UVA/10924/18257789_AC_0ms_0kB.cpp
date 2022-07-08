#include <bits/stdc++.h>

using namespace std;

bool isprime(int x)
{
    int i,j=0;

    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            j=1;

            return false;
        }
    }

    if(j==0)
        return true;
}

int main()
{
    string line;

    int i,l,to=0;

    char m;

    while(getline(cin,line))
    {
        for(i=0;i<line.size();i++)
        {
            m=line[i];

            l=int(m);

            if(l>=97 && l<=122)
            {
                l=l-96;
                to=to+l;
            }

            if(l>=65 && l<=90)
            {
                l=l-38;
                to=to+l;
            }


        }


        if(isprime(to)==true)

            cout << "It is a prime word." <<endl;
        else

            cout <<"It is not a prime word." << endl;
            
            to=0;





    }


    return 0;
}
