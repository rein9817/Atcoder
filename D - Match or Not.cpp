#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;
int n,m,k;
bool match_or_not(char a,char b)
{
    return a=='?'||b=='?'||a==b;
}

void solve()
{
    string s,t;
    cin>>s>>t;
    int n=s.length();
    vector<int> pre(n+1,false),suf(n+1,false);
    pre[0]=true;
    for(int i=0;i<t.size();i++)
    {
        if(!match_or_not(s[i],t[i])) break;
        pre[i+1]=true;
    }
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    suf[0]=true;
    for(int i=0;i<t.size();i++)
    {
        if(!match_or_not(s[i],t[i])) break;
        suf[i+1]=true;
    }
    for(int i=0;i<=t.size();i++)
    {
        if(pre[i] && suf[t.size()-i]) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}