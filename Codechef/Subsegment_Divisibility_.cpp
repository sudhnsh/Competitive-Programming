    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define rep(i,a,n) for(ll i=a;i<n;i++)
    #define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
    #define vpair vector<pair<ll,ll> >
    #define m 1000000007
    //by sudhnsh
    void solve()
    {
        ll n;
        cin>>n;
        ll j=2;
        ll k=3;
        rep(i,0,n)
        {
            cout<<j<<' ';
            if(i&1)
            {
                j+=k;
            }
            else
            {
                j+=1;
            }
        }
        cout<<'\n';
    }
    int main()
    { ffst;
    ll t;
    cin>>t;
        while(t--)
        {
        solve();
        }
    return 0;
    }