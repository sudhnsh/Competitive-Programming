#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
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
    vector<ll> v(n),v1;
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    v1=v;
    sort(v1.begin(),v1.end());
    ll mx=v1[n-1];
    v1.clear();
    ll k=0;
    ll t=v[n-1];
    for(ll i=n-2;i>=0;i--)
    {
        if(v[i]>t)
        {
            k++;
            t=v[i];
        }
    }
    cout<<k<<'\n';
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