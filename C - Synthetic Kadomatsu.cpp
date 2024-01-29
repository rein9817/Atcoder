#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=100001;
int n,a,b,c;
int num[10];
int ans=INT_MAX;
void dfs(int level,int x,int y,int z,int val)
{
    if(x && y && z)
    {
        ans=min(ans,(abs(x-a)+abs(y-b)+abs(z-c)+val-30));
    }
    if(level==n) return;
    dfs(level+1,x+num[level],y,z,val+10);
    dfs(level+1,x,y+num[level],z,val+10);
    dfs(level+1,x,y,z+num[level],val+10);
    dfs(level+1,x,y,z,val);
}

int main()
{
    cin>>n>>a>>b>>c;
    for(int i=0;i<n;i++) cin>>num[i];
    dfs(0,0,0,0,0);
    cout<<ans<<"\n";
}