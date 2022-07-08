    #include<bits/stdc++.h>
     
    using namespace std;
     
     
    int main()
    {
        int test;
     
        cin >> test;
     
        int n;
     
        int cnt;
     
        int cp,j,k,t;
     
        stack <int> v;
     
        while(test--)
        {
            cin >> n;
     
            if(n<10)
            {
                cout << 1 << endl;
     
                cout << n << endl;
            }
     
            else
            {
                cnt = 1;
                cp=0;
     
     
                while(n!=0)
                {
                    t=cnt;
     
                    j=1;
     
                    while(t>0)
                    {
                        j=j*10;
     
                        t--;
                    }
     
     
     
     
     
                    k=n%j;
     
     
     
                    if(k!=0)
                    {
                        v.push(k);
     
                        cp++;
                    }
     
                    n=n-k;
     
                    cnt++;
                }
     
                cout << cp << endl;
     
                while(!v.empty())
                {
                    cout << v.top() << " ";
     
                    v.pop();
                }
     
                cout << endl;
            }
     
        }
     
        return 0;
    }