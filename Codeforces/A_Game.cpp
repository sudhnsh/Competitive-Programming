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
    cin>>n;
    vector<ll> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    ll f=0;
    rep(i,0,n)
    {
        if(v[i]==1)
        {
            f=i;
        }
        else
        {
            break;
        }
    }
    ll l=n-1;
    for(ll i=n-1;i>=0;i--)
    {
        if(v[i]==1)
        {
            l=i;
        }
        else
        {
            break;
        }
    }
    if(f>l)
    {
        cout<<0<<'\n';
    }
    else
    {
        cout<<l-f<<'\n';
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