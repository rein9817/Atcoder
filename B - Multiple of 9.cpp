#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main()
{
    string s;
    cin>>s;
    ll ans=0;
    for(char c:s)
    {
        ans+=c-'0';
    }
    if(ans%9==0) cout<<"Yes\n";
    else cout<<"No\n";
}