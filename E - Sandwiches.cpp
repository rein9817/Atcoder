#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=300010;
int a[maxn];
using pii=pair<int,int>;
using ll=long long ;
vector<int> edge[maxn];

void solve()
{
    rein
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        edge[x].push_back(i);
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        int temp=edge[i].size();
        if(temp)
        {
            for(int j=1;j<temp;j++)
            {
                ans+=(edge[i][j]-edge[i][j-1]-1)*1LL*j*(temp-j);
            }
        }   
    }
    cout<<ans<<"\n";
}

int main()
{
    solve();
}