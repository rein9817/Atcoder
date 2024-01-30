#include <bits/stdc++.h>
using namespace std;
#define int long long 
int a[45];

signed main()
{
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++) cin>>a[i];
    int nn=n/2;
    int left=n-nn;
    int ans=0;
    vector<int> b,c;
    for(int i=0;i<(1<<nn);i++)
    {
        int sum=0;
        for(int j=0;j<nn;j++)
        {
            if(i & (1<<j))
            {
                sum+=a[j];
            }
        }
        b.push_back(sum);
    }
    for(int i=0;i<(1<<left);i++)
    {
        int sum=0;
        for(int j=0;j<left;j++)
        {
            if(i & (1<<j))
            {
                sum+=a[j+nn];
            }
        }
        c.push_back(sum);
    }
    sort(c.begin(),c.end());
    for(int i=0;i<(long long )b.size();i++)
    {
        if(b[i]>t) continue;
        else if(b[i]+c[c.size()-1LL]<=t)
        {
            ans=max(ans,b[i]+c[c.size()-1LL]);
            continue;
        }
        int p=upper_bound(c.begin(),c.end(),t-b[i])-c.begin();
        if(p==0) continue;
        int temp=b[i]+c[--p];
        if(temp>t) continue;
        ans=max(ans,temp);
    }
    cout<<ans<<"\n";
}