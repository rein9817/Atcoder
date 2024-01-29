#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> cnt(maxn);
    set<pair<int,int>> s;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        s.erase({cnt[x],x});
        cnt[x]++;
        s.insert({cnt[x],-x});
        cout<<-prev(s.end())->second<<"\n";
    }
}