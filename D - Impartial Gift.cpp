#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
    int n,m,d;
    cin>>n>>m>>d;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int upper=lower_bound(b.begin(),b.end(),a[i]+d)-b.begin();
        int lower=lower_bound(b.begin(),b.end(),a[i]-d)-b.begin();
        if(upper==b.end()-b.begin()) continue;
        while(upper!=lower)
        {
            if(b[upper]<=a[i]+d)
            {
                ans=a[i]+b[upper];
                break;
            }
        }
    }
}