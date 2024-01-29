#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn];
bitset<maxn> visited;
int memo[maxn];
vector<int> edge[maxn];

//dfs(i) max value can get from ith vertex
int dfs(int cur)
{
    if(visited[cur]) return memo[cur];
    visited[cur]=1;
    for(int x:edge[cur])
    {
        memo[cur]=max(memo[cur],max(dfs(x),a[x]));
    }
    return memo[cur];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    memset(memo,INT_MIN,sizeof(memo));
    visited.reset();
    while(m--)
    {
        int c,d;
        cin>>c>>d;
        edge[c].push_back(d);
    }
    long long ans=INT_MIN;
    for(int i=1;i<=n;i++) dfs(i);
    for(int i=1;i<=n;i++)
    {
        if(memo[i]==0) continue;
        ans=max(ans,(long long)memo[i]-a[i]);
    }
    cout<<ans<<"\n";
}