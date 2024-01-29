#include <bits/stdc++.h>

#define ll long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define mod 1000000007
#define inf 1e9
#define F first
#define S second
#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vl vector<ll>
#define vii vector<pair<int, int>>
#define vll vector<pair<ll, ll>>
#define all(a) a.begin(), a.end()

using namespace std;

bool compare(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.second < p2.second;
}



void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;

    string s;
    cin>>s;
    ll ans = LONG_LONG_MAX;
    for(int i =0;i<n;i++)
    {
        ll tempans = i * a;
        for(int j = 0;j<n/2;j++)
        {
            if(s[j] != s[n - j - 1])
            {
                tempans += b;
            }
        }

        ans = min(tempans,ans);
        rotate(s.begin(),s.begin()+1,s.end());
    }
    cout << ans<<"\n";
}

int main()
{
    fast_io;
    solve();
}