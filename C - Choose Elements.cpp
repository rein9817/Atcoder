#include <bits/stdc++.h>
using namespace std;

const int maxn=2e6+10;
int a[maxn][2];
bool dp[maxn][2];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i][0];
    for(int i=1;i<=n;i++) cin>>a[i][1];
    memset(dp,0,sizeof(dp));
    dp[1][0]=dp[1][1]=true;
    for(int i=2;i<=n;i++) 
    {
        for(int j=0;j<2;j++)
        {
            for(int t=0;t<2;t++)
            {
                if(dp[i-1][j]==true && abs(a[i][t]-a[i-1][j])<=k) dp[i][t]=true;
            }
        }
    }
    if(dp[n][0]||dp[n][1]) cout<<"Yes\n";
    else cout<<"No\n";
}