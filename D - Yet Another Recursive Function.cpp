#include <bits/stdc++.h>
using namespace std;
#define int long long 

map<int,int> memo;

int dp(int x)
{
    if(x==0) return 1;
    if(memo[x]) return memo[x];
    int a=x/2;
    int b=x/3;
    return memo[x]=dp(a)+dp(b);
}

signed main()
{
    int n;
    cin>>n;
    cout<<dp(n)<<"\n";
}