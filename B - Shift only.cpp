#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int max_n=100001;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=INT_MAX;
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]&1) {
            cout<<"0\n";
            return 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        while(a[i])
        {
            a[i]/=2;
            cnt++;
            if(a[i]&1) {
                ans=min(ans,cnt);
                break;
            }
        }
    }
    cout<<ans<<"\n";
}