#include <bits/stdc++.h>
using namespace std;

const int maxn=200091;
using ll=long long ;
int parent[maxn];
int sz[maxn];

int find(int x)
{
    return x==parent[x]?x:parent[x]=find(parent[x]);
}
struct edge{
    ll a,b,c;
    bool operator<(const edge& other)
    {
        return c<other.c;
    }
}e[maxn];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>e[i].a>>e[i].b>>e[i].c;
    }
    sort(e+1,e+n);
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
    ll ans=0;
    for(int i=1;i<n;i++)
    {
        int a=find(e[i].a);
        int b=find(e[i].b);
        ans+=1LL*sz[a]*sz[b]*e[i].c;
        parent[a]=b;
        sz[b]+=sz[a];
    }
    cout<<ans<<"\n";
}