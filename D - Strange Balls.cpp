#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn];
using pii=pair<int,int>;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    stack<pii> s;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        count++;
        if(s.empty()||s.top().first!=x)
        {
            s.push({x,1});
        }
        else {
            s.top().second++;
            if(s.top().second==x)
            {
                count-=x;
                s.pop();
            }
        }
        cout<<count<<"\n";
    }
}