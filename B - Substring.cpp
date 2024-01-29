#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    int ans=INT_MAX;
    for(int i=0;i<=n-m;i++)
    {
        int cnt=0;
        for(int j=0;j<m;j++)
        {
            if(t[j]!=s[i+j])
            {
                cnt++;
            }
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<"\n";
}