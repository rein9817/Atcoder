#include <bits/stdc++.h>
using namespace std;
#define N 200005
long long timer[N];
long long ans[N];
vector<int> edge[N];

void dfs(int cur,int val,int pre)
{
    val+=timer[cur];
    ans[cur]=val;
    for(auto x:edge[cur])
    {
        if(x==pre) continue;
        dfs(x,val,cur);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    
    //need a value array 
    
    for(int i=1;i<=n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    int p,x;
    while(q--)
    {
        cin>>p>>x;
        timer[p]+=x;
    }
    dfs(1,0,0);
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
}