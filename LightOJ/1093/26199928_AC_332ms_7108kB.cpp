#include<bits/stdc++.h>

using namespace std;

int main(){

int a[100005];
int n,k;
int test,x;

 scanf("%d",& test);


for(int i=1;i<=test;i++){

    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++){

        scanf("%d",&x);

        a[i]=x;
    }

    multiset<int>st;

    for(int i=0;i<k;i++){

        st.insert(a[i]);
    }

    int p=*st.rbegin()-*st.begin();

    for(int i=0,j=k;j<n;j++,i++){

        st.insert(a[j]);

        st.erase(st.find(a[i]));

        int q= *st.rbegin()- *st.begin();

    p=max(p,q);


    }

    printf("Case %d: %d\n",i,p);


}

return 0;}