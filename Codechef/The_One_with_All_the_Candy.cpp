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
    ll n,z = 0;
    cin >> n;
    vector<ll> a(n);
    rep(i,0,n)
    {
        cin >> a[i];
        if (a[i] == 0)
            z++;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    if (a[n - 1] == 0)
    {
        cout << n - z << "\n";
        return;
    }
    ll ans = 0;
    rep(i,0,n) 
    if (a[i] > a[n - 1]) ans++;
    cout << (a[n - 1] * n) + ans << "\n";
}
int main()
{
    //ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}