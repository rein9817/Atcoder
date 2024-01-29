#include <bits/stdc++.h>
using namespace std;

using ll=long long ;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    vector<int> prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        prefix[i]=prefix[i-1]+a[i];
    }
    ll sum=0;
    for(int i=1;i<=m;i++) sum+=1LL*(i)*a[i];
    ll ans=sum;
    for(int i=m;i<=n;i++)
    {
        int l=i-m;
        int r=i-1;
        sum-=prefix[r]-prefix[l]+a[l];
        sum+=1LL*a[i]*m;
        ans=max(ans,sum);
    }
    cout<<ans<<"\n";
}