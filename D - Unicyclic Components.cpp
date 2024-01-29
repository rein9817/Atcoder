#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;
vector<int> edge[maxn];
using pii=pair<int,int>;
int parent[maxn];

int find(int x)
{
    return x==parent[x]?x:find(parent[x]);
}

void merge(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x==y) return;
    parent[x]=y;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> u(m),v(m);
    for(int i=1;i<=n;i++) parent[i]=i;
    for(int i=0;i<m;i++)
    {
        cin>>u[i]>>v[i];
        merge(u[i],v[i]);
    }
    vector<int> es(n),vs(n);
    for(int i=1;i<=n;i++)
    {
        vs[find(i)]++;
    }
    for(int i=0;i<m;i++)
    {
        es[find(u[i])]++;
    }
    if(es==vs) cout<<"Yes\n";
    else cout<<"No\n";
    
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}