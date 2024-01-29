#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    vector<vector<int>> temp;
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        vector<int> ans;
        for(int j=1;j<=l;j++)
        {
            int x;
            cin>>x;
            ans.push_back(x);
        }
        temp.push_back(ans);
    }
    while(q--)
    {
        int s,t;
        cin>>s>>t;
        s--;
        t--;
        cout<<temp[s][t]<<"\n";
    }
}
