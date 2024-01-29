#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=100001;

using pii=pair<int,int>;

int main()
{
    ll n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum=accumulate(a.begin(),a.end(),0LL);
    t%=sum;
    for(int i=0;i<n;i++)
    {
        if(t>a[i])
        {
            t-=a[i];
        }
        else if(t==a[i])
        {
            cout<<i+1<<" "<<a[i]<<"\n";
            break;
        }
        else {
            cout<<i+1<<" "<<t<<"\n";
            break;
        }
    }
}