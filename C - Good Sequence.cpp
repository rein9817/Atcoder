#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    for(auto x:a){
        mp[x]++;
    }
    int ans=0;
    for(auto p:mp)
    {
        int x=p.first;
        int n=p.second;
        if(n<x) ans+=n;
        else ans+=n-x;
    }
    cout<<ans<<"\n";
}