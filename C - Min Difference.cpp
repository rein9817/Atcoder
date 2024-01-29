#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;
int a[maxn];
int b[maxn];
void solve()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int left=0;
    int right=0;
    int ans=INT_MAX;
    while(left<n && right<m)
    {
        ans=min(ans,abs(a[left]-b[right]));
        if(a[left]>b[right])
        {
            right++;
        }
        else {
            left++;
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}