#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int maxn=2e5+10;

vector<int> edge[maxn];
int dis[maxn];
int cnt[maxn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    queue<int> q;
    memset(dis,-1,sizeof(dis));
    dis[1]=1;
    cnt[1]=1;
    q.push(1);
    while(!q.empty())
    {
        auto head=q.front();q.pop();
        for(int x:edge[head])
        {
            if(dis[x]==-1)
            {
                dis[x]=dis[head]+1;
                q.push(x);  
                cnt[x]=cnt[head];
            }
            else if(dis[x]==dis[head]+1)
            {
                cnt[x]+=cnt[head];  
                cnt[x]%=mod;
            }
        }
    }
    cout<<cnt[n]<<"\n";
}