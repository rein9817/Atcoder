#include <bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
//dp[i] 走到第i項所擁有的最大值。
using ll=long long ;
ll dp[maxn][2];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<ll,ll>> a(n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    if(a[1].first)
    {
        dp[1][1]=a[1].second;
        dp[1][0]=0;
    }
    else {
        dp[1][0]=max(a[1].second,0LL);
        dp[1][1]=0;
    }
    for(int i=2;i<=n;i++)
    {
        if (a[i].first) {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = max(dp[i - 1][0] + a[i].second, dp[i - 1][1]);
        } else {
            dp[i][0] = max(max(dp[i - 1][0], dp[i - 1][1]) + a[i].second, dp[i - 1][0]);
            dp[i][1] = dp[i - 1][1];
        }
    }
    cout<<max(dp[n][0],dp[n][1])<<"\n";
}   