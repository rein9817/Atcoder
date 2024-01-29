#include <bits/stdc++.h>
using namespace std;
#define int long long 
int dp[2010][2010];
int a[2020];
#define inf 1e18
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    dp[0][0]=0;
    dp[0][1]=-inf;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(j==0) dp[i][0]=0;
            else if(j>i) dp[i][j]=-inf;
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]+j*a[i]);
        }
    }
    cout<<dp[n][m]<<endl;
}