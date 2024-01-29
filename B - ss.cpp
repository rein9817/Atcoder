#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.length()%2==0) s.erase(s.length()-2,2);
    // else s.erase(s.length()-1,1);
    int n=s.length();
    int ans=0;
    for(int i=0;i<=n/2;i++)
    {
        string x,y;
        for(int j=0;j<i;j++) x+=s[j];
        for(int k=i;k<2*i;k++) y+=s[k];
        if(x==y) ans=max(ans,i*2);
    }
    cout<<ans<<"\n";
}