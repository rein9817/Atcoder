#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 10;
int prime[maxn], tp = 0;
long long p[maxn];

void init()
{
    int n = 1e6 + 1;
    for(int i=2; i<n; i++) prime[i] = 1;
    for(int i=2; i<n; i++)
    {
        if(prime[i])
        {
            p[tp++] = i;
            for(int j=i+i; j<n; j+=i)
                prime[j] = 0;
        }
    }
}

int main()
{
    int t = 0;
    init();
    long long n;
    cin >> n;
    for(int i=0; i<tp; i++)
    {
        long long now = p[i] * p[i] * p[i];
        long long x = n / now;
        t += upper_bound(p, p + i, x) - p;
    }
    cout << t << endl;
    return 0;
}

