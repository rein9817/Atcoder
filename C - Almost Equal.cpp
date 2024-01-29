#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> s;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        s.push_back(temp);
    }
    sort(s.begin(),s.end());
    do{
        bool flag=true;
        for(int i=0;i<n-1;i++){
            int cnt=0;
            for(int j=0;j<m;j++) if(s[i][j]!=s[i+1][j]) cnt++;
            if(cnt!=1) flag=false;
        }
        if(flag) {
            cout<<"Yes"<<"\n";
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<"No"<<"\n";
}