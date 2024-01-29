#include <iostream>
#define int long long 
using namespace std;

int countChristmasTrees(int A, int M, int L, int R) {
    int treesBetween = (R - A) / M - (L - A) / M; 
    return treesBetween; 
}

signed main() 
{
    int A, M, L, R;
    cin>>A>>M>>L>>R;
    if(L==R)
    {
        cout<<0<<endl;
        return 0;
    }
    int ans= countChristmasTrees(A, M, L, R);
    if((A-L)>0 && (A-L)%M==0) ans++;
    // if((R-A)%M==0) ans++;
    cout<<ans<<endl;
}
