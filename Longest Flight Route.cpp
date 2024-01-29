#include <bits/stdc++.h>
using namespace std;

const int maxn=1e5+10;
vector<int> edge[maxn];
bitset<maxn> visited;

int memo[maxn];
vector<int> ans;
void dfs(int cur)
{
    if(visited[cur]) return memo[cur];
    visited[cur]=1;
    for(int x:edge[cur])
    {
        
    }
    ans.push_back(cur);
    return memo[cur];
}

int main()
{
    int n,m;
    cin>>n>>m;
    memset(memo,INT_MIN,sizeof(memo));
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
    }
    for(int i=1;i<=n;i++) dfs(i);
    if(memo[n]==INT_MIN) cout<<"IMPOSSIBLE\n";
    else 
    {
        reverse(ans.begin(),ans.end());
        ans.pop_back();
        cout<<ans.size()<<"\n";
        
        for(auto x:ans) cout<<x<<" ";
    }
}