#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int ans=0;
    int cnt1=m;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            cnt1=m;
            temp=ans;
        }
        else if(s[i]=='1')
        {
            if(cnt1) 
            {
                cnt1--;
                continue;
            }
            if(temp) 
            {
                temp--;
                continue;
            }
            ans++;
        }
        else
        {
            if(temp) 
            {
                temp--;
                continue;
            }
            ans++;
        }
    }

    cout<<ans<<endl;
}