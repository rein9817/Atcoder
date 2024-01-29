#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;
#define int long long 

void solve()
{
    int d;
    cin>>d;
    int left=0;
    int right=sqrt(d)+1;
    int ans=d;
    while(left<=right)
    {
        int sum=left*left+right*right;
        ans=min(ans,abs(left*left+right*right-d));
        if(sum>=d) right--;
        else left++;
    }
    cout<<ans;
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}