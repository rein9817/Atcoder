#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
using ll=long long ;
vector<array<int,3>> e[maxn];

bool visited[maxn];
vector<pair<ll,ll>> pos(maxn);

void dfs(int cur,ll x,ll y)
{
    visited[cur]=true;
    pos[cur]={x,y};
    for(auto temp:e[cur])
    {
        if(visited[temp[0]]) continue;
        dfs(temp[0],x+temp[1],y+temp[2]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        x--;y--;
        e[x].push_back({y,a,b});
        e[y].push_back({x,-a,-b});
    }
    dfs(0,0,0);
    for(int i=0;i<n;i++)
    {
        if(visited[i])
        {
            cout<<pos[i].first<<" "<<pos[i].second<<"\n";
        }
        else cout<<"undecidable\n";
    }
}