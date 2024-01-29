#include <bits/stdc++.h>
using namespace std;
const int mod=998244353;
using ll=long long ;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    ll ans=1;
    for(int i=m;i>=1;i--)
    {
        ans*=i;
        ans%=mod;
    }
    cout<<ans<<"\n";
}