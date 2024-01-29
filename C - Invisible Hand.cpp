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
    rein
    int n,m;
    cin>>n>>m;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        a.push_back(x+1);
    }
    sort(ALL(a));
    cout<<a[m-1]<<"\n";
}   