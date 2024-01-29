#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
const int mod=998244353;

int main()
{
    int n,m,K;
    cin>>n>>m>>K;
    vector<vector<ll>> dp(n+1,vector<ll>(K+1));
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<K;j++)
        {
            for(int k=1;k<=m;k++)
            {
                if(j+k<=K) dp[i+1][j+k]+=dp[i][j]%mod;
            }
        }
    }
    ll res=0;
    for(int i=1;i<=K;i++)
    {
        res+=dp[n][i]%mod;
        res%=mod;
    }
    cout<<res<<'\n';
}