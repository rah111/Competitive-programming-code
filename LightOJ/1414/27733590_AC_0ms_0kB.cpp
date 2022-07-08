#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    char c;

    int date1,year1,date2,year2,ts=0;

    string m1,m2;

    while(t--)
    {
        cin >> m1 >> date1 >> c >> year1 >> m2 >> date2 >> c >> year2;

        if(m1=="January" || m1=="February")
        {
            year1--;
        }

        if(m2=="January" || m2=="February")
        {
            year2--;
        }
        if(m1=="February" && date1==29)
        {
            year1--;
        }
        if(m2=="February" && date2==29)
        {
            year2++;
        }

        year1=(year1/4)+(year1/400)-(year1/100);
        year2=(year2/4)+(year2/400)-(year2/100);

        ts++;

        printf("Case %d: %d\n",ts,year2-year1);
    }

    return 0;

}
