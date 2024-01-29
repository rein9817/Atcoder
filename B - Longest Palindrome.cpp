#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int left=0;
    int right=s.size()-1;
    while(left<right)
    {
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int ans=0;
    // if(check(s))
    // {
    //     cout<<n<<endl;
    //     return 0;
    // }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            string temp=s.substr(i,j-i);
            // cout<<temp<<endl;
            if(check(temp)) ans=max(ans,j-i);
        }
    }
    cout<<ans<<endl;
}