#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;
vector<int> edge[maxn];
bool visited[maxn];

using pii=pair<int,int>;

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        memset(visited,0,sizeof(visited));
        queue<int> q;
        q.push(i);
        visited[i]=1;
        while(!q.empty())
        {
            auto head=q.front();q.pop();
            for(int x:edge[head])
            {
                if(visited[x]) continue;
                q.push(x);
                visited[x]=1;
                ans++;
            }
        }
    }
    ans-=m;
    cout<<ans<<"\n";
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}