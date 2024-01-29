#include <bits/stdc++.h>
using namespace std;

#define int long long 

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int ans=0;
    int base=1;
    int n=s.length();
    for(int i=s.size()-1;i>=0;i--)
    {
        ans+=(s[i]-'A'+1)*base;
        base*=26;
    }
    cout<<ans<<'\n';
}