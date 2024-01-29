#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;
vector<int> temp={1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111, 11111111111, 111111111111, 1111111111111, 11111111111111, 111111111111111, 1111111111111111, 11111111111111111};
void solve()
{
    int n;
    cin>>n;
    int m=temp.size();
    vector<int> ans;
    unordered_set<int> visited;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            {
                int test=temp[i]+temp[j]+temp[k];
                if(visited.count(test)==1) continue;
                visited.insert(test);
                ans.push_back(test);
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[n-1]<<"\n";
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}