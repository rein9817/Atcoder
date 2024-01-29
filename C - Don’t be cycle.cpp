#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int max_n=200010;

int parent[max_n];
int find(int x)
{
    if(x==parent[x]) return x;
    return parent[x]=find(parent[x]);
}

bool unite(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b) return false;
    parent[a]=b;
    return true;
}

int main()
{
    rein
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) parent[i]=i;
    vector<pair<int,int>> edge;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        edge.push_back({a,b});
    }
    ll ans=0;
    for(auto x:edge)
    {
        int a=x.first;
        int b=x.second;
        if(!unite(a,b)) ans++;
    }
    cout<<ans<<"\n";
}   