#include<bits/stdc++.h>
#include<atcoder/modint>

using namespace std;
using namespace atcoder;

using mint = modint998244353;

mint binom[5010][5010];

int main() {
    for (int i = 0; i < 5010; i++) {
        binom[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            binom[i][j] = binom[i - 1][j - 1] + binom[i - 1][j];
        }
    }
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int &i: a) cin >> i;
    
    mint ans = 0;
    for (int i = 1; i <= m; i++) {
        int rem = n + 1 - k;
        int zero = 0;
        for (int j: a) {
            if (j >= i) --rem;
            if (j == 0) ++zero;
        }
        if (rem < 0 or rem > zero) {
            ans += (rem < 0 ? 1 : 0);
            continue;
        }
        mint p = mint(m + 1 - i) / m;
        vector<mint> p_pow(zero + 1, 1);
        vector<mint> q_pow(zero + 1, 1);
        for (int j = 0; j < zero; j++) {
            p_pow[j + 1] = p_pow[j] * p;
            q_pow[j + 1] = q_pow[j] * (1 - p);
        }
        for (int j = rem; j <= zero; j++) {
            ans += binom[zero][j] * p_pow[j] * q_pow[zero - j];
        }
    }
    cout << ans.val() << endl;
}
