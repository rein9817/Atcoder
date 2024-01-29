#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]<=s[i+1])
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
}