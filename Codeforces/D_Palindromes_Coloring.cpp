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
    ll n, k;
    cin >> n >> k;
    string s;
    ll prs = 0, single = 0;
    ll ans = 0;
    cin >> s;
    map<ll, ll> mp;
    for (auto c : s)
    {
        mp[c-'a']++;
    }
    for (auto p : mp)
    {
        if (p.second % 2 != 0)
            single++;
        prs += (p.second / 2);
    }
    ans += (2 * (prs / k));
    if ((2 * (prs % k) + single) >= k)
        ans++;
    cout << ans << '\n';
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