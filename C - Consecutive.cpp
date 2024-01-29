#include <bits/stdc++.h>
using namespace std;
const int maxn=3e5+10;
int temp[maxn];
int prefix[maxn];
char s[maxn];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    
    cin>>s;
    for(int i=1;i<=n-1;i++)
    {
        if(s[i]==s[i+1]) temp[i]++;
    }
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+temp[i];
    }
    while(q--)
    {
        int left,right;
        cin>>left>>right;
        cout<<prefix[right]-prefix[left-1]<<"\n";
    }
}