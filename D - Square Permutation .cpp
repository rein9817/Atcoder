#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll temp=0;
    vector<int> ans(n);
    iota(ans.begin(),ans.end(),1);
    int cnt=0;
    do
    {
        ll temp=0;
        for(int i=0;i<n;i++)
        {
            temp+=pow(10,n-i)+(s[ans[i]-1]-'0');
        }
        cout<<temp<<endl;
        if(sqrt(temp)*sqrt(temp)==temp) cnt++;
    } while(next_permutation(ans.begin(),ans.end()));
    cout<<cnt<<"\n";

}