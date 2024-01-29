#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main()
{
    ll a,b;
    cin>>a>>b;
    int ans=1;
    while(1)
    {
        a*=2;
        if(a>b) break;
        ans++;
    }
    cout<<ans<<endl;
}