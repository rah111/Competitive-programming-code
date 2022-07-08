    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     
        int test;
     
        cin >> test;
     
        int x;
     
        while(test--)
        {
            cin >> x;
     
            if(x%2==0)
            {
                cout << x/2 << " " << x/2 << endl;
            }
     
            else
            {
                cout << x-1 << " " << 1 << endl;
            }
        }
        return 0;
    }