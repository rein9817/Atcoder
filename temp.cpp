#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n;
int d[17][17];
const int N=(1<<16)-1;
int dp[N+5],ans;

signed main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cin>>d[i][j];
        }
    }
    for(int state=0;state<(1<<n);state++)
    {
        for(int i=0;i<n;i++)
        {
            if(state>>i&1) continue;
            for(int j=i+1;j<n;j++)
            {
                if(state>>j&1) continue;
                dp[state|(1<<i)|(1<<j)]=max(dp[state|(1<<i)|(1<<j)],dp[state]+d[i][j]);
                ans=max(ans,dp[state|(1<<i)|(1<<j)]);
            }
        }
    }
    cout<<ans<<"\n";
}