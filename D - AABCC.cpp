#include <bits/stdc++.h>
using namespace std;
#define int long long 

vector<int> ans;
const int maxn=3e5+10;
bitset<maxn> visited;

void pre()
{
    for(int i=2;i<=maxn;i++)
    {
        if(!visited[i])
        {
            ans.push_back(i);
            for(int j=i;j<=maxn;j+=i)
            {
                visited[j]=1;
            }
        }
    }
}
signed main()
{
    int n;
    cin>>n;
    pre();
    int m=ans.size();
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        if(ans[i]*ans[i]*ans[i]*ans[i]>n) break;
        for(int j=i+1;j<m;j++)
        {
            if(ans[i]*ans[i]*ans[j]*ans[j]>n) break;
            for(int k=j+1;k<m;k++)
            {
                if(ans[i]*ans[i]*ans[j]*ans[k]*ans[k]>n) break;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}