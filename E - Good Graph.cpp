#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+10;
vector<int> edge[maxn];
int parent[maxn];

int find(int x)
{
    return x==parent[x]?x:parent[x]=find(parent[x]);
}

void merge(int a,int b)
{
    a=find(a);b=find(b);
    if(a==b) return ;
    parent[a]=b;
}
map<pair<int,int>,bool> id;

signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) parent[i]=i;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
        merge(a,b);
    }

    int k;
    cin>>k;
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        id[{find(a),find(b)}]=id[{find(b),find(a)}]=1;
    }   
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(id.find({find(a),find(b)})!=id.end()||id.find({find(a),find(b)})!=id.end())
        {
            cout<<"No\n";
        }
        else {
            cout<<"Yes\n";
        }
    }
}