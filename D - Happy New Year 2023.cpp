#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int maxn=1e7+10;
bitset<maxn> used;
int prime[maxn];
int cnt=0;

void pre()
{
    for(int i=2;i<=maxn;i++)
    {
        if(!used[i])
        {
            prime[cnt++]=i;
            for(int j=i;j<=maxn;j+=i)
            {
                used[j]=1;
            }
        }
    }
}

signed main()
{
    int t;
    cin>>t;
    pre();
    while(t--)
    {
        int x;
        cin>>x;
        for(int i=0;i<cnt;i++)
        {
            if(x%prime[i]==0)
            {
                x/=prime[i];
                if(x%prime[i]==0)
                {
                    int a=x/prime[i];
                    cout<<prime[i]<<" "<<a<<endl;
                }
                else {
                    int temp=sqrt(x);
                    cout<<temp<<" "<<prime[i]<<endl;
                }
                break;
            }
        }
    }
}