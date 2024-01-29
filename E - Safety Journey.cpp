#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=5100;
vector<int> edge[maxn];
using pii=pair<int,int>;
ll dp[maxn][maxn];
const int mod=998244353;

int n,m,k;
void solve()
{
    rein
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    dp[0][1]=1;
    for(int i=0;i<k;i++)
    {
        ll sum=0;
        for(int j=1;j<=n;j++)  sum=(sum+dp[i][j]+mod)%mod;
        for(int j=1;j<=n;j++)
        {
            dp[i+1][j]=(sum-dp[i][j]+mod)%mod;
            for(int x:edge[j])
            {
                dp[i+1][j]=(dp[i+1][j]-dp[i][x]+mod)%mod;
            }
        }
    }
    cout<<dp[k][1]<<"\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}