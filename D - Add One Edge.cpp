#include <bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
vector<int> edge[maxn];
int dis[maxn];


int bfs(int source )
{
    queue<int> q;
    int ans=0;
    q.push(source);
    dis[source]=0;
    while(!q.empty())
    {
        auto head=q.front();q.pop();
        for(int x:edge[head])
        {
            if(dis[x]==-1)
            {
                dis[x]=dis[head]+1;
                q.push(x);
                ans=max(ans,dis[x]);
            }
        }
    }
    return ans;
}

int main()
{
    int n1,n2,m;
    cin>>n1>>n2>>m;
    memset(dis,-1,sizeof(dis));
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    int a=bfs(1);
    int b=bfs(n1+n2);
    cout<<a+b+1<<"\n";
}