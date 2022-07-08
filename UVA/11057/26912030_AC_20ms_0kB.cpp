#include<bits/stdc++.h>

using namespace std;

vector<int> v;


int binarySearch(int key,int sizeOfVector,int start)
{
    int l=start,r=sizeOfVector-1,mid=0;

    while(l<=r)
    {
        mid=l+(r-l)/2;

        if(v[mid]==key)
        {
            return v[mid];
        }
        else if(v[mid]<key)
        {
            l=mid+1;
        }
        else if(v[mid]>key)
        {
            r=mid-1;
        }
    }

    return -1;
}

int main()
{
   int n,m,d,p1,p2,k,f1,f2,i;



   while(cin >> n)
   {
       

       while(n--)
       {
           cin >> d;

           v.push_back(d);
       }

       cin >> m;

       sort(v.begin(),v.end());

       int minp=1000005;

       for(i=0;i<v.size();i++)
       {
           p1=v[i];

           k=m-p1;

           p2=binarySearch(k,v.size(),i+1);

           if((p2-p1)<minp && p2!=-1)
           {
               minp=p2-p1;

               f1=p1;

               f2=p2;
           }
       }

       cout << "Peter should buy books whose prices are "<< f1 <<" and "<< f2 <<"." << endl;

       cout << endl;
       
        v.clear();


   }
    return 0;
}