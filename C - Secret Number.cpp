#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;


int main()
{
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<=9999;i++)
    {
        vector<bool> flag(10);
        int x=i;
        for(int j=0;j<4;j++)
        {
            flag[x%10]=1;
            x/=10;
        }
        bool flag2=1;
        for(int j=0;j<10;j++)
        {
            if(s[j]=='o'  && !flag[j]) flag2=false;
            if(s[j]=='x'&& flag[j]) flag2=false;
        }
        ans+=flag2;
    }
    cout<<ans<<"\n";
}