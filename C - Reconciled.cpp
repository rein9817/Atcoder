    #include <bits/stdc++.h>
    using namespace std;
    using ll=long long;

    const int mod=1e9+7;


    int main()
    {
        int n,m;
        cin>>n>>m;
        if(abs(n-m)>1) {
            cout<<"0\n";
            return 0;
        }
        if(n==m)
        {
            ll ans=1;
            for(int i=1;i<=n;i++)
            {
                ans*=i;
                ans%=mod;
            }
            for(int i=1;i<=m;i++)
            {
                ans*=i;
                ans%=mod;
            }
            ans*=2;
            ans%=mod;
            cout<<ans<<"\n";
        }
        else {
            ll ans=1;
            for(int i=1;i<=n;i++)
            {
                ans*=i;
                ans%=mod;
            }
            for(int i=1;i<=m;i++)
            {
                ans*=i;
                ans%=mod;
            }
            cout<<ans<<"\n";
        }
    }