    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        double r,x1,y1,x2,y2,p,k;
     
        cin >> r >> x1 >> y1 >> x2 >> y2;
     
        p=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        
        k=ceil(p/(2*r));
        
        cout << k << endl;
     
        
     
     
     
        return 0;
    }