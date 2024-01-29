#include <bits/stdc++.h>
using namespace std;

int cnt[200010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;i*j<=n;j++)
        {
            cnt[i*j]++;
        }
    }
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=cnt[i]*cnt[n-i];
    }
    cout<<ans<<"\n";
}