#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+10;
int parent[maxn];
int sz[maxn];
using ll=long long ;
vector<int> edge[maxn];

int find(int x)
{
    return x==parent[x]?x:parent[x]=find(parent[x]);
}

bool merge(int a,int b)
{
    a=find(a);b=find(b);
    if(a==b)
    {   
        return false;
    }
    parent[a]=b;
    sz[b]+=sz[a];
    return true;
}

int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    vector<int> ans(n+1);
    int cnt=0;
    for(int i=n;i>=1;i--)
    {
        ans[i]=cnt;
        cnt++;
        for(int v:edge[i])
        {
            if(v>i)
            {
                if(merge(i,v))
                {
                    cnt--;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    
}