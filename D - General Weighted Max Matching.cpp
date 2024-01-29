#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=20;

using pii=pair<int,int>;
int table[maxn][maxn];
bool matched[maxn];
int n;
int ans,sum;
void dfs(int now)
{
    if(now==n+1)
    {
        ans=max(ans,sum);
        return ;
    }
    if(matched[now])
    {
        dfs(now+1);
        return;
    }
    for(int i=now+1;i<=n;i++)
    {
        if(matched[i]) continue;
        matched[i]=now;
        matched[now]=i;
        sum+=table[now][i];
        dfs(now+1);
        sum-=table[now][i];
        matched[i]=matched[now]=0;
    }
    dfs(now+1);
}

void solve()
{
    rein
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            cin>>table[i][j];
        }
    }
    dfs(1);
    cout<<ans<<"\n";
}

signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}