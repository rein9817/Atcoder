#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=100001;
using ll=long long ;

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(c==0||a==b||(a+b==0 && c%2==0)) cout<<"=\n";
    else if(c&1) cout<<((a>b)?">\n":"<\n");
    else cout<<((abs(a)>abs(b))?">\n":"<\n");
}