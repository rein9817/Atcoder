#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long 

#define ALL(x) begin(x),end(x)

using pii=pair<int,int>;

void solve()
{
    rein
    unordered_map<int,int> cnt;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        cnt[x]=1;
    }
    vector<int> temp;
    int ans=0;
    int pairs=n-k;
    for(int i=1;i<=n;i++)
    {
        if(cnt[i]) 
        {
            temp.push_back(i);
        }
    }
    sort(ALL(temp));
    int count=((2*n-k)/2)-pairs;
    if(count==0) 
    {
        cout<<0<<endl;
        return ;
    }
    int left=0;
    int right=temp.size()-1;
    while(count--)
    {
        if(abs(temp[left]-temp[left+1])<abs(temp[right]-temp[right-1]))
        {
            ans+=abs(temp[left]-temp[left+1]);
            left++;
        }
        else if(abs(temp[left]-temp[left+1])==abs(temp[right]-temp[right-1]))
        {
            ans+=2*abs(temp[left]-temp[left+1]);
            left++;
            right--;
            count--;
        }
        else {
            ans+=abs(temp[right]-temp[right-1]);
            right--;
        }
    }
    cout<<ans<<"\n";
}

signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}