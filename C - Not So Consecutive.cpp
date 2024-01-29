#include <bits/stdc++.h>
using namespace std;
const int maxn=5005;
int a[maxn];
const int mod=998244353;
int dp[maxn][maxn];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    dp[1][1]=1;
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]==-1)
        {
            
        }
        else {
            for(int j=1;j<i;j++)    
            {
            
            dp[i][j]=dp[i-1][j]+
            }
        }
        
    }
}