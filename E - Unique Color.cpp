#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
vector<int> edge[maxn];
bool visited[maxn];
bool ans[maxn];
bool path[maxn];
int a[maxn];
set<int> s;

void dfs(int cur,int pre)
{
    visited[cur]=true;
    for(int x:edge[cur])
    {
        if(x==pre) continue;
        if(visited[x]) continue;
        if(s.find(a[x])!=s.end()) ans[x]=false;
        else 
        {
            ans[x]=true;
            s.insert(a[x]);
        }
        dfs(x,cur);
        if(ans[x]) s.erase(s.find(a[x]));
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<n;i++)
    {
        int c,d;
        cin>>c>>d;
        edge[c].push_back(d);
        edge[d].push_back(c);
    }
    ans[1]=true;
    s.insert(a[1]);
    dfs(1,0);
    for(int i=1;i<=n;i++)
    {
        if(ans[i]) cout<<i<<"\n";
    }
}