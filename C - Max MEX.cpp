#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=300010;

using pii=pair<int,int>;
int a[maxn];

int main()
{
   int n,k;
   cin>>n>>k;
   set<int> s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    for(int i=0;i<k;i++)
    {
        if(s.find(i)==s.end())
        {
            cout<<i<<"\n";
            return 0;
        }
    }
   cout<<k<<endl;
}