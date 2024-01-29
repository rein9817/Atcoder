#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    vector<pair<char,int>> a;
    vector<pair<char,int>> b;
    int n=s.length();
    int m=t.length();
    for(int i=0,j;i<n;i=j)
    {
        j=i+1;
        while(j<n && s[j]==s[i]) j++;
        a.push_back({s[i],j-i});
    }
    for(int i=0,j;i<m;i=j)
    {
        j=i+1;
        while(j<m && t[j]==t[i]) j++;
        b.push_back({t[i],j-i});
    }
    if(a.size()!=b.size()) {
        cout<<"No\n";
        return 0;
    }
    bool ans=true;
    for(int i=0;i<a.size();i++)
    {
        if(a[i].first!=b[i].first) ans=false;
        if(!(a[i].second==b[i].second||a[i].second<b[i].second && a[i].second>=2)) ans=false;
    }
    if(ans) cout<<"Yes\n";
    else cout<<"No\n";
}