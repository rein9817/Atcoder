#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> p(n);
    map<int,int> cnt;
    for(int i=0;i<n;i++) 
    {
        cin>>p[i];
        cnt[p[i]]=i+1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<(cnt[a]<cnt[b]?a:b)<<'\n';
    }
}