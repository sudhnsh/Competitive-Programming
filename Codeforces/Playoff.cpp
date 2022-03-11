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
void power(ll n)
{
    ll t=2;
    rep(i,0,n-1)
    {
        t*=2;
    }
    cout<<t-1<<'\n';
}
void solve()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<'\n';
    }
    else
    {
       power(n);
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