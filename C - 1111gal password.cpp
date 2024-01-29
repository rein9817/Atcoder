#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+10;
using ll=long long ;

int dp[maxn][11];
const int mod=998244353;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=9;i++)
    {
        dp[1][i]=1;
    }   
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=9;j++)
        {
            dp[i][j]=(dp[i][j]%mod+dp[i-1][j]%mod)%mod;
            if(j-1>=1) dp[i][j]=(dp[i][j]%mod+dp[i-1][j-1]%mod)%mod;
            if(j+1<=9) dp[i][j]=(dp[i][j]%mod+dp[i-1][j+1]%mod)%mod;
        }
    }
    int ans=0;
    for(int i=1;i<=9;i++)
    {
        ans+=dp[n][i];
        ans%=mod;
    }
    cout<<ans<<endl;
}