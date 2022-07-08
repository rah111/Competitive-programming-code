#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,d=0,k;

    scanf("%d",&t);


    bool flg;

    int i;

    string s,p;

    cin.ignore();

    while(t--)
    {


        getline(cin,s);

        getline(cin,p);

       int a[26]={0};

        int b[26]={0};

        for(i=0;i<s.size();i++)
        {
            k=(int)s[i];

            if(k>=97 && k<=122)
            {
                a[k-97]++;
            }

            if(k>=65 && k<=90)
            {
                a[k-65]++;
            }
        }



        for(i=0;i<p.size();i++)
        {
            k=(int)p[i];

            if(k>=97 && k<=122)
            {
                b[k-97]++;
            }

            if(k>=65 && k<=90)
            {
                b[k-65]++;
            }
        }

       d++;

        flg=1;

        for(i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                printf("Case %d: No\n",d);

                flg=0;

                break;
            }
        }

        if(flg==1)
        {
            printf("Case %d: Yes\n",d);
        }

    }
    return 0;
}



