#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    int x1,y1,x2,y2;

    int rowdif,coldif,tr=0;

    while(test--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        rowdif=abs(x1-x2);

        coldif=abs(y1-y2);

        tr++;

        

        if(rowdif==coldif)
        {
            printf("Case %d: %d\n",tr,1);

            continue;
        }

        if(rowdif%2==0 && coldif%2==0)
        {
            printf("Case %d: %d\n",tr,2);

            continue;
        }

        if(rowdif%2!=0 && coldif%2!=0)
        {
            printf("Case %d: %d\n",tr,2);

            continue;
        }

       

        printf("Case %d: impossible\n",tr);

    }

    return 0;
}
