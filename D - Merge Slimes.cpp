#include<bits/stdc++.h>
#define int long long
using namespace std;
struct Node
{
    int val,cnt;
    friend bool operator<(Node x,Node y)
    {
        return x.val<y.val;
    }
};
set<Node>se;
int n;
signed main()
{   
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        Node no;
        no.val=x;
        no.cnt=y;
        se.insert(no);
    }
    int sum=0;
    while(!se.empty())
    {
        Node now=*se.begin();
        se.erase(se.begin());
        if(now.cnt%2==1)sum++;
        now.cnt/=2;
        now.val*=2;
        if(now.cnt==0)continue;
        auto it=se.find(now);
        if(it==se.end())
        {
            se.insert(now);
        }
        else
        {
            auto c=*it;
            int cc=c.cnt;
            se.erase(it);
            now.cnt+=cc;
            se.insert(now);
        }
    }
    cout<<sum;
}