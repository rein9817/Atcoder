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
    int n;
    cin>>n;
    vector<int> a(3*n);
    for(int i=0;i<3*n;i++) cin>>a[i];
    map<int,int> cnt;
    vector<pair<int,int>> q;
    for(int i=0;i<3*n;i++)
    {
        cnt[a[i]]++;
        if(cnt[a[i]]==2)
        {
            pii temp;
            temp.first=i+1;
            temp.second=a[i];
            q.push_back(temp);
        }
    }
    sort(q.begin(),q.end());
    for(auto x:q)
    {
        cout<<x.second<<" ";
    }
}