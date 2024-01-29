#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;
int a[maxn];

using pii=pair<int,int>;

void solve()
{
    int n,l,r;
    cin>>n>>l>>r;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=l;j<=r;j++)
        {
            if(a[i]-j>=0)
            {
                cout<<j<<' ';
                break;
            }
        }
    }
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}