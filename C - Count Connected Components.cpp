#include <bits/stdc++.h>
using namespace std;

bool visited[105];
vector<vector<int>> edge;

void dfs(int x)
{
    visited[x]=true;
    for(int k:edge[x])
    {
        if(!visited[k]) dfs(k);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    v.resize(n);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a-=1;
        b-=1;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
            if(!visited[i])
            {
                ans++;
                dfs(i);
            }
    }
    cout<<ans<<'\n';
}