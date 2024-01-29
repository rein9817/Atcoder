    #include <bits/stdc++.h>
    using namespace std;
    #define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    using ll=long long ;
    #define f first
    #define s second
    #define ALL(x) begin(x),end(x)
    const int maxn=2e5+10;

    using pii=pair<int,int>;
    vector<int> edge[maxn];
    int visited[maxn];
    int parent[maxn];
    bool cycle=false;
    vector<int> ans;

    void dfs(int cur)
    {
        visited[cur]=1;
        for(int x:edge[cur])
        {
            if(!visited[x])
            {
                parent[x]=cur;
                dfs(x);
            }
            else {
                int temp=cur;
                ans.push_back(cur);
                while(temp!=x)
                {
                    temp=parent[temp];
                    ans.push_back(temp);
                }
                cycle=true;
                return ;
            }
        }
        visited[cur]=2;
    }
    
    int main()
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            edge[i].push_back(x);
        }
        for(int i=1;i<=n;i++)
        {
            if(cycle==false && !visited[i])
            {
                dfs(i);
            }
        }
        reverse(ALL(ans));
        cout<<(int)ans.size()<<"\n";
        for(auto x:ans) cout<<x<<" ";   
    }