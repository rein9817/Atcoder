#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main()
{
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum=0;
    int ans=INT_MIN;
    int left=0;
    for(int right=0;right<n;right++)
    {
        sum+=a[right];
        while(sum>s)
        {
            sum-=a[left++];
        }
        ans=max(ans,right-left+1);
    }
    cout<<(ans==INT_MIN?0:ans)<<"\n";
}