#include <bits/stdc++.h>
using namespace std;

map<vector<vector<int>>,int> cnt;

int main()
{
    int h,w;
    cin>>h>>w;
    vector<vector<int>> a(h,vector<int>(w));
    vector<vector<int>> b(h,vector<int>(w));
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++) cin>>a[i][j];
    }
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++) cin>>b[i][j];
    }
    queue<vector<vector<int>>> q;
    q.push(a);
    cnt[a]=0;
    while(!q.empty())
    {
        auto head=q.front();q.pop();
        if(head==b)
        {
            cout<<cnt[head]<<"\n";
            return 0;
        }
        for(int i=0;i+1<h;i++)
        {
            auto temp=head;
            swap(temp[i],temp[i+1]);
            if(!cnt[temp])
            {
                cnt[temp]=cnt[head]+1;
                q.push(temp);
            }
        }
        for(int j=0;j+1<w;j++)
        {
            auto temp=head;
            for(int i=0;i<h;i++) swap(temp[i][j],temp[i][j+1]);
            if(!cnt[temp])
            {
                cnt[temp]=cnt[head]+1;
                q.push(temp);
            }
        }
    }
    cout<<"-1\n";
}