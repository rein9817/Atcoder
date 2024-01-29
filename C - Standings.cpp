#include "bits/stdc++.h"

using namespace std;
const int N = 2e5+10;

using ll = long long;
struct people{
    ll x,sum;
    int id;
}e[N];

int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i ++){
        ll a,b;
        cin >>a >> b;
        e[i] = {a,a+b,i};
    }
    sort(e+1,e+1+T,[&](const people &a,const people &b){
        if(a.x*b.sum!=b.x*a.sum) return a.x*b.sum > b.x*a.sum;
        else return a.id < b.id;
    });

    for(int i = 1; i <= T; i ++){
        cout << e[i].id << " ";
    }
    return 0;
}
