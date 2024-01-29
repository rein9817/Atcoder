#include <bits/stdc++.h>
using namespace  std;
using ll=long long ;

const int maxn=1e5+10;
ll dp[maxn];

int main()
{
    int n;
    cin>>n;
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        int t,x,a;
        cin>>t>>x>>a;
        while(i<t)
        {
            dp[i]=dp[i-1];
            i++;
        }
        //i==t
        dp[i]=max(dp[i-1],dp[])
    }
}