#include <bits/stdc++.h>
using namespace std;

#define int long long 
vector<vector<int>> a;
int ans=0;
int n,x;
void dfs(int pos,int temp)
{
    if(pos==n)
    {
        if(temp==x) ans++;
        return ;
    }
    for(int col:a[pos])
    {
        if(temp>x/col) continue;
        dfs(pos+1,temp*col);
    }
}
signed main()
{
    
    cin>>n>>x;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        int l;cin>>l;
        a[i].resize(l);
        for(int j=0;j<l;j++) cin>>a[i][j];
    }
    dfs(0,1);
    cout<<ans<<"\n";
}