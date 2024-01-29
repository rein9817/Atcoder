#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> w(n);
    for(int i=0;i<n;i++) cin>>w[i];
    int left=0;
    int right=n;
    while(left<right)
    {
        ll mid=left+(right-left)>>1;
        ll temp=0;
        for(int i=0;i<n;i++)
        {
            if((mid>=w[i])==s[i]-'0') temp++;
        }
        
    }
}