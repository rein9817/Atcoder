#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
        cout<<(i==n-1?'\n':' ');
    }
}