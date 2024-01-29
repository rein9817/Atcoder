#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int maxn=2e5+10;
vector<int> edge[maxn];

void dijkstta()
{
    
}
signed main()
{
    int n,m,k;
    cin>>n>>m>>k;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

}