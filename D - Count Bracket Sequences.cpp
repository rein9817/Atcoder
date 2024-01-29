#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int max_n=100001;

const int mod=998244353;

int main()
{
    string s;
    cin>>s;
    int left=0;
    int right=0;
    int question=0;
    ll ans=0;
    for(char c:s)
    {
        if(c=='(') left++;
        else if(c==')') right++;
        else question++;
    }
    if(right-left>question) {
        cout<<"0\n";
        return 0;
    }
    
}