#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int max_n=300010;

int a[max_n];
int prefix[max_n];
int n,q;

int lowbit(int x)
{
    return x&-x;
}

ll query(int x)
{
    ll ans=0;
    while(x)
    {
        ans^=prefix[x];
        x-=lowbit(x);
    }
    return ans;
}

void update(int x,int val)
{
    while(x<=n)
    {
        prefix[x]^=val;
        x+=lowbit(x);
    }
}

void init()
{
    for(int i=1;i<=n;i++) prefix[i]=0;
    for(int i=1;i<=n;i++) update(i,a[i]);
}

int main()
{
    rein
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i];
    init();
    for(int i=0;i<q;i++)
    {
        int t,x,y;
        cin>>t>>x>>y;
        if(t==1)
        {
            update(x,y);
        }
        else {
            cout<<(query(y)^query(x-1))<<"\n";
        }
    }
}