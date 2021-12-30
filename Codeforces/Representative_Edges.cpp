#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i, n, a) for (ll i = a; i > n; i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define m 1000000007
// by sudhnsh
void solve()
{
    ll n;
    cin >> n;
    vector<double> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    if(n==1||n==2)
    {
       cout<<0<<'\n';
    }
    else
    {
        ll mn=n-1;
        rep(i,0,n)
        {
            map<double,ll> mp;
            rep(j,0,n)
            {
                if(i!=j)
                mp[((v[j]-v[i])/(j-i))]++;
            }
            ll mx=0;
            for(auto x:mp)
            {
                mx=max(mx,x.second+1);
            }
            mn=min(mn,n-mx);
        }
        cout<<mn;
        cout<<'\n';
    }
   
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}