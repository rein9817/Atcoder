#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i+=2)
    {
        swap(s[i],s[i+1]);
    }
    cout<<s<<endl;
}