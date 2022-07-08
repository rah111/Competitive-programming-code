#include<bits/stdc++.h>

using namespace std;

string add(string a,string b)
{
    string sum;

    int i,j,carry,tempSum;

    i=a.length()-1;

    j=b.length()-1;

    carry=0;

    while(i>=0 || j>=0)
    {
        tempSum=carry;

        if(i>=0)
        {
            tempSum=tempSum+((int)(a[i]-'0'));

            i--;

        }

        if(j>=0)
        {
            tempSum=tempSum+((int)(b[j]-'0'));

            j--;
        }

        carry=tempSum/10;

        sum=sum+((char)((tempSum%10)+'0'));
    }

    if(carry>0)
    {
        sum=sum+((char)(carry+'0'));
    }

    for(int k=sum.length()-1;k>0 && sum[k]=='0';k--)
    {
        sum.pop_back();

        // 008+008=0016 , because of this loop it will
        // show 16. 00+00 -> 0
        // after pop back operation length gets decreased
        // by 1
    }

    reverse(sum.begin(),sum.end());

    return sum;
}

string fibonacci[5009];

void fib()
{
    fibonacci[0]="0"; // " " for string . ' ' for char

    fibonacci[1]="1";

    int i;

    for(i=2;i<=5000;i++)
    {

        fibonacci[i]=add(fibonacci[i-1],fibonacci[i-2]);
    }
}

int main()
{
    fib();

    int n;

    while(cin >> n)
    {
        cout << "The Fibonacci number for " << n << " is " << fibonacci[n] << endl;
    }
    return 0;
}
