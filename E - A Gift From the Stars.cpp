#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int deg[maxn];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        deg[u]++;
        deg[v]++;
    }
    int remain=n;
    vector<int> ans;
    for(int i=1;i<=n;i++)
    {
        if(deg[i]>=3)
        {
            remain-=deg[i]+1;
            ans.push_back(deg[i]);
        }
    }
    for(int i=3;i<=remain;i+=3)
    {
        ans.push_back(2);
    }
    sort(ans.begin(),ans.end());
    for(int x:ans)
    {
        cout<<x<<" ";
    }
}