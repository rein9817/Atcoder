#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
vector<int> edge[maxn];
bool visited[maxn];

void dfs(int cur,int pre)
{
    visited[cur]=true;
    for(int x:edge[cur])
    {
        if(x==pre) continue;
        if(visited[x])
        {
            cout<<"No\n";
            exit(0);
        }
        else {
            dfs(x,cur);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    if(m!=n-1)
    {
        cout<<"No\n";
        return 0;
    }
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(edge[i].size()>2){
            cout<<"No\n";
            return 0;
        }
    }
    dfs(1,0);
    for(int i=1;i<=n;i++)
    {
        if(!visited[i]) {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}