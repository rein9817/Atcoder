#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=100010;

ll parent[maxn];
ll sz[maxn];

ll find(ll x)
{
    return x==parent[x]?x:parent[x]=find(parent[x]);
}

void merge(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        parent[a]=b;
        sz[b]+=sz[a];
    }
}

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> edge(m);
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
    
    for(int i=0;i<m;i++)
    {
        cin>>edge[i].f>>edge[i].s;
    }
    ll ans=n*(n-1)/2;
    vector<ll> temp(m);
    for(int i=m-1;i>=0;i--)
    {
        temp[i]=ans;
        int a=find(edge[i].f);
        int b=find(edge[i].s);
        if(a!=b)
        {
            ans-=sz[a]*1LL*sz[b];
            merge(a,b);
        }
    }
    for(auto x:temp) cout<<x<<"\n";
}