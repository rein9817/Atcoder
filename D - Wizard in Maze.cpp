#include <bits/stdc++.h>
using namespace std;

const int dx[4]={0,0,1,-1};
const int dy[4]={1,-1,0,0};
bool visited[1005][1005];

int main()
{
    int h,w;
    cin>>h>>w;
    vector<vector<int>> dist(h,vector<int>(w,INT_MAX));
    vector<vector<bool>> vis(h,vector<bool>(w,false));
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a--;b--;c--;d--;
    vector<string> table(h);
    for(int i=0;i<h;i++) cin>>table[i];
    deque<pair<int,int>> q;
    q.push_back({a,b});
    dist[a][b]=0;
    visited[a][b]=true;
    while(!q.empty())
    {
        auto head=q.front();
        q.pop_front();
        if(head.first==c && head.second==d)
        {
            cout<<dist[c][d]<<endl;
            return 0;
        }
        if(visited[head.first][head.second]) continue;
        visited[head.first][head.second]=true;
        for(int i=0;i<4;i++)
        {
            int x=head.first+dx[i];
            int y=head.second+dy[i];
            if(x>=h ||x<0 || y>=w ||y<0||table[x][y]=='#'||dist[x][y]<=) continue;
            if(visited[x][y]) continue; 
            if(table[x][y]=='#') continue;
            visited[x][y]=true;
            q.push({x,y,dist+1});
        }
    }
    cout<<"-1\n";
}