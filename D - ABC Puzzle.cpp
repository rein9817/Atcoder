#include <bits/stdc++.h>
using namespace std;
#define rein ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll=long long ;
#define f first
#define s second
#define ALL(x) begin(x),end(x)
const int maxn=200010;

using pii=pair<int,int>;
char table[30][30];
int n;
string r,c;
bool flag;
bool check_prev(int x,int y,char c)
{
    int cnt[3];
    cnt[c-'A']++;
    for(int i=x;i>=0;i--) cnt[table[i][y]-'A']++;
    for(int i=0;i<3;i++)
    {
        if(cnt[i]>=2) return false;
    }
    for(int i=0;i<3;i++) cnt[i]=0;
    cnt[c-'A']++;
    for(int i=y;i>=0;i--) cnt[table[x][i]-'A']++;
    for(int i=0;i<3;i++)
    {
        if(cnt[i]>=2) return false;
    }
    return true;
}
int cnt[2][5][128];

bool match(char x,char y)
{
    if(!x) return 1;
    return x==y;   
}

void dfs(int x,int y)
{
    if(x==n)
    {
        cout<<"Yes\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<table[i][j];
            }
            cout<<endl;
        }
        exit(0);
    }
    if(y==n)
    {
        dfs(x+1,0);
        return ;
    }
    if(match(x,y)==false) return;
    if(cnt[0][x]['.']<n-3 && cnt[1][y]['.']<n-3)
    {
        table[x][y]='.';
        cnt[0][x]['.']++;
        cnt[1][y]['.']++;
        dfs(x,y+1);
        cnt[0][x]['.']--;
        cnt[1][y]['.']--;
    }
    for(char temp='A';temp<='C';temp++)
    {
        if(cnt[0][x][temp]==0 && cnt[1][y][temp]==0 )
        {
            if(match(r[x],temp) && match(c[y],temp))
            {   
                table[x][y]=temp;
                char a=0;
                char b=0;
                swap(a,r[x]);
                swap(b,c[y]);
                cnt[0][x][temp]++;
                cnt[1][y][temp]++;
                dfs(x,y+1);
                cnt[0][x][temp]--;
                cnt[1][y][temp]--;
                swap(a,r[x]);
                swap(b,c[y]);
            }
        }
    }
}

void solve()
{
    rein
    cin>>n;
    cin>>r;
    cin>>c;
    dfs(0,0);
    cout<<"No\n";
}

int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}