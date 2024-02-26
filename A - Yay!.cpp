#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans=-1;
    map<char,int> cnt;
    for(int i=0;i<s.length();i++)
    {
        cnt[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(cnt[s[i]]==1)
        {
            cout<<i+1<<"\n";
            break;
        }
    }
}