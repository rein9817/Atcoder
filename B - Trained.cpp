#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int ans=0;
    bool flag=false;
    for(int i=1;i!=a[i];i=a[i])
    {
        ans++;
        if(2==a[i])
        {
            flag=true;
            break;
        }
        if(ans>n) break;
    }
    if(flag) cout<<ans<<"\n";
    else cout<<"-1\n";
}