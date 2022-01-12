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
    sort(v.begin(),v.end());
    map<ll, bool> mp;
    rep(i,0,n)
    {
        if (v[i] <= n && mp[v[i]] == 0)
        {
            mp[v[i]] = 1;
        }
        else
        {
            while (v[i] / 2 > 0)
            {
                v[i] = v[i] / 2;
                if (v[i] <= n && mp[v[i]] ==0)
                {
                    mp[v[i]] = 1;
                    break;
                }
            }
        }
    }
    rep(i,1,n+1)
    {
        if (mp[i] == 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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