#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;
#define int long long 

void solve()
{
    rein
    int q;
    cin>>q;
    int incre=0;
    multiset<int> s;
    while(q--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int x;
            cin>>x;
            s.insert(x-incre);
        }
        else if(op==2)
        {
            int x;
            cin>>x;
            incre+=x;
        }
        else {
            auto temp=s.begin();
            s.erase(s.begin());
            cout<<*temp+incre<<"\n";
        }
    }
}

signed main()
{
    solve();
}   