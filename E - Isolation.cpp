#include <bits/stdc++.h>
using namespace std;

int n,q;
const int max_n=300010;

vector<int> edge[max_n];

int main()
{
    cin>>n>>q;
    set<int> s; //recoding connected edge
    while(q--)
    {
        int idx;
        cin>>idx;
        if(idx==1){
            int u,v;
            cin>>u>>v;
            edge[u].push_back(v);
            edge[v].push_back(u);
            s.insert(u);
            s.insert(v);
        }
        else {
            int v;
            cin>>v;
            s.erase(v);
            //how to delete vector of vector
            for(int i=1;i<=n;i++)
            {
                if(i==v) continue;
                if(edge[i].size()) //not the same as v
                {
                    int pos=-1;
                    for(int y=0;y<edge[i].size();y++){
                        if(edge[i][y]==v) pos=y;
                    }
                    if(pos!=-1) edge[i].erase(edge[i].begin()+pos);

                }
            }
        }
        cout<<n-s.size()<<"\n";
    }
}