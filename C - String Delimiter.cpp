#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=100001;

using pii=pair<int,int>;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int cnt=0;
    for(char &c:s)
    {
        if(c=='"' && !cnt)
        {
            cnt++;
        }
        else if(c=='"' && cnt==1)
        {
            cnt--;
        }
        if(cnt)
        {
            continue;
        }
        else
        {
            if(c==',') c='.';
        }
    }
    cout<<s<<endl;
}