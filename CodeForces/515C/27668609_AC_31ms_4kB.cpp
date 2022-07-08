#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string a;

    cin >> a;

    int i;

    vector<int> v;

    for(i=0;i<a.size();i++)
    {
        if(a[i]=='2')
        {
            v.push_back(2);
        }
        else if(a[i]=='3')
        {
            v.push_back(3);
        }
        else if(a[i]=='4')
        {
            v.push_back(2);
            v.push_back(2);
            v.push_back(3);
        }
        else if(a[i]=='5')
        {
            v.push_back(5);
        }
        else if(a[i]=='6')
        {
            v.push_back(3);
            v.push_back(5);
        }
        else if(a[i]=='7')
        {
            v.push_back(7);
        }
        else if(a[i]=='8')
        {
            v.push_back(7);
            v.push_back(2);
            v.push_back(2);
            v.push_back(2);
        }
        else if(a[i]=='9')
        {
            v.push_back(7);
            v.push_back(3);
            v.push_back(3);
            v.push_back(2);
        }

    }

    sort(v.begin(),v.end(),greater<int>());

    for(i=0;i<v.size();i++)
    {
        cout << v[i];
    }

    cout << endl;

    return 0;
}
