#include <bits/stdc++.h>
using namespace std;
const int dx[6]={-1,-1,0,0,1,1};
const int dy[6]={-1,0,-1,1,0,1};

int parent[1005];


int find(int x)
{
    return x==parent[x]?x:parent[x]=find(parent[x]);
}
void merge(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a==b) return ;
    parent[a]=b;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> p(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].first>>p[i].second;
        parent[i]=i;
    }
    int ans=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(find(i)==find(j)) continue;
            bool flag=false;
            if(p[i].first+1==p[j].first && p[i].second==p[j].second) flag=true;
            else if(p[i].first-1==p[j].first && p[i].second==p[j].second) flag=true;
            else if(p[i].first==p[j].first && p[i].second==p[j].second+1) flag=true;
            else if(p[i].first==p[j].first && p[i].second==p[j].second-1) flag=true;
            else if(p[i].first-1==p[j].first && p[i].second-1==p[j].second) flag=true;
            else if(p[i].first+1==p[j].first && p[i].second+1==p[j].second) flag=true;
            if(flag)
            {
                ans--;
                merge(i,j);
            }
        }
    }
    cout<<ans<<"\n";
}