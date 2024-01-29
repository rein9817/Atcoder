#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string t,s;
    cin>>t;
    vector<int> ans;
    map<char,int> origin;
    for(char c:t)
    {
        origin[c]++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s==t)
        {
            ans.push_back(i);
            continue;
        }
        map<char,int> temp;
        for(char c:s) temp[c]++;
        
    }
}