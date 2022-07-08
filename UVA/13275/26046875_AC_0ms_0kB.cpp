#include <bits/stdc++.h>

using namespace std;

bool leapyear(int x)
{
    if(x%400==0) return true;
    else if(x%100==0) return false;
    else if(x%4==0) return true;
    else return false;
}

int main()
{
    int test;

    cin >> test;

    int date,month,year,year2,cnt,i=0;

    while(test--)
    {
        cin >> date >> month >> year >> year2;

        cnt=0;

        i++;

        if(date==29 && month==2)
        {
            while(year<year2)
            {
                year=year+1;

                if(leapyear(year))
                {
                    cnt++;
                }
                
                


            }

            cout << "Case " <<i << ": "  << cnt << endl;
        }

        else

        cout << "Case " <<i << ": "  << year2-year << endl;
    }
    return 0;
}
