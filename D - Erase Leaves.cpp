#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define f first
#define s second
#define ALL(x) begin(x),end(x)

using pii=pair<int,int>;
const int maxn=3e5+10;
vector<int> edge[maxn];
int num;

void dfs(int x,int lt)
{
    num++;
    for(int y:edge[x])
    {
        if(y==lt) continue;
        dfs(y,x);
    }
}

void solve()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    int ans=0;
    for(int x:edge[1])
    {
        num=0;
        dfs(x,1);
        ans=max(ans,num);
    }
    cout<<n-ans<<"\n";
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}