#include <bits/stdc++.h>
using namespace std;
bool dp[55][10010];
int a[55];
int b[55];

int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    memset(dp,0,sizeof(dp));
    dp[0][0]=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            for(int k=0;k<=b[i-1];k++)
            {
                if(j>=k*a[i-1])
                {
                    dp[i][j]|=dp[i-1][j-k*a[i-1]];
                }
            }
        }
    }
    if(dp[n][x]) cout<<"Yes\n";
    else cout<<"No\n";
}