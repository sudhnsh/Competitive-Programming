#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
// by sudhnsh
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll count = 1;
    rep(i, 0, n)
    {
        if (v[i] >= count)
        {
            count++;
        }
    }
    cout << count - 1;
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    rep(i, 0, t)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
        cout << '\n';
    }
    return 0;
}