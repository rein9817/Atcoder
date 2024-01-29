#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int maxn=2e5+10;
int a[maxn];
int n,s;
set<pair<int,int>> interval;

int cal()
{
    int sum=0;
    int cnt=0;
    for(int i=0,j;i<n;i=j+1)
    {
        j=i;
        while(sum+a[j]<s && j<n)
        {
            sum+=a[j];
            j++;
            
        }
        sum=0;
        cnt++;
        // cout<<i<<" "<<j<<endl;
        interval.insert({i,j});
    }
    //幾個區間
    return cnt;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt=cal();
    // cout<<cnt<<endl;s
    int ans=n;
    for(auto x:interval)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    for(int i=0,j;i<n;i=j)
    {
        for(j=i+1;j<n;j++                                                )
        {   
            if(interval.find({i,j})==interval.end())
            {
                auto x=interval.upper_bound({i,j});
                int pos=distance(interval.begin(),x)+1;
                cout<<pos<<endl;
                //分法會是pos
                //
                ans+=pos+1;
                break;
            }
            else {
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}