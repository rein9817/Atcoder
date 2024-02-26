#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q;
    cin>>q;
    array<int,26> cnt;
    iota(cnt.begin(),cnt.end(),0);
    while(q--)
    {
        char a,b;
        cin>>a>>b;
        for(auto &x:cnt)
        {
            if(x==a-'a')
            {
                x=b-'a';
            }
        }
    }
    for(auto x:s)
    {
        cout<<char('a'+cnt[x-'a']);
    }
}