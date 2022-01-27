#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
// by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(2*n),v1,v2;
    rep(i,0,2*n)
    {
        cin>>v[i];
    }
    rep(i,0,n)
    {
        v1.push_back(max(v[i],v[i+n]));
        v2.push_back(min(v[i],v[i+n]));
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    cout<<v1[n-1]*v2[n-1]<<'\n';
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