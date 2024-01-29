#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> cnt;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cnt[x]++;
    }
    if(cnt.size()>1) cout<<"No\n";
    else cout<<"Yes\n";
}