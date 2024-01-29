#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int> dp(n);
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='C')
        {
            dp[i+1]=dp[i]+1;
        }
        else {
            dp[i+1]=dp[i];
        }
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<"\n";  
    }
}