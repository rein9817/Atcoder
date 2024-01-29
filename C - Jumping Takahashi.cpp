#include <bits/stdc++.h>
using namespace std;
int dp[105][10010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    int a,b;
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        for(int j=1;j<=x;j++)
        {
            if(j>=a && dp[i-1][j-a]==1)
            {
                dp[i][j]=1;
            }
            if(j>=b && dp[i-1][j-b]==1)
            {
                dp[i][j]=1;
            }
        }
    }
    if(dp[n][x]) cout<<"Yes\n";
    else cout<<"No\n";
}