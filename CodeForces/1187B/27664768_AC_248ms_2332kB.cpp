#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;

    cin >> s;

    vector<int> position[26];

    int i;

    string k;

    for(i=0;i<s.size();i++)
    {
        position[s[i]-'a'].push_back(i+1);
    }

    int t;

    cin >> t;

    int ans;

    while(t--)
    {
        cin >> k;

        int cnt[26]={0};

        for(i=0;i<k.size();i++)
        {
            cnt[k[i]-'a']++;
        }

        ans=0;

        for(i=0;i<26;i++)
        {
            if(cnt[i]>0)
            {
                ans=max(ans,position[i][cnt[i]-1]);
            }

        }

        printf("%d\n",ans);
    }
    return 0;
}
