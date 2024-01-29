#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+6;
struct edge
{
    int from,to,nxt;
}e[maxn];
int head[maxn];
int in[maxn];
int cnt=0;

void add_edge(int u,int v)
{
    e[++cnt]={u,v,head[u]};
    head[u]=cnt;
}
unordered_map<string,int> mp;
int num=0;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string a,b;
        cin>>a>>b;
        if(!mp[a]) mp[a]=++num;
        if(!mp[b]) mp[b]=++num;
    }
    queue<int> q;
    for(int i=1;i<=num;i++)
    {
        if(in[i]==0) q.push(i);
    }
    int ans=0;
    while(!q.empty())
    {
        int t=q.front();
        ans++;
        for()
    }
}