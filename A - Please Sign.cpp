#include <bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
int a[maxn];
int p[maxn];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=2;i<=n;i++) {
        cin>>p[i];
    }

    for(int i=0;i<100;i++)
    {
        vector<int> dp(n+1);
        for(int j=1;j<n;j++)
        {
            dp[j]=a[j+1]+a[p[j+1]];
        }
        for(int i=1;i<=n;i++) a[i]=dp[i];
    }
    // for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    if(a[1]<0)
    {
        cout<<'-';
    }
    else if(!a[1])
    {
        cout<<0;
    }
    else {
        cout<<'-';
    }
}