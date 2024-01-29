#include <bits/stdc++.h>
#define int long long 
using namespace std;
int a[25];

signed main()
{
    int n,k;
    cin>>n>>k;
    k--;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    while(k--)
    {
        auto temp=*s.begin();
        s.erase(s.begin());
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]+temp);
        }
    }
    cout<<*s.begin()<<"\n";
}