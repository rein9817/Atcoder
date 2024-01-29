#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int parent[maxn];
int sz[maxn];
int find(int x)
{
    return x==parent[x]?x:parent[x]=find(parent[x]);
}
void merge(int a,int b)
{
    a=find(a);b=find(b);
    if(a==b) return ;
    parent[a]=b;
    sz[b]+=sz[a];
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        merge(a,b);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,sz[i]);
    }
    cout<<ans<<"\n";
}