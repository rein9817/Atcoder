#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;

void solve()
{
    string s;
    cin>>s;
    bool flag=true;
    int n=s.length();
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(!isupper(s[i-1])) {
                flag=false;
                break;
            }
        }
        else {
            if(!islower(s[i-1]))
            {
                flag=false;
                break;
            }
        }
    }
    if(flag) cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}