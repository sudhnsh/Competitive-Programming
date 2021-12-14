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
    vector<ll> v(n);
    ll count=1;
    ll p=0;
    rep(i, 0, n)
    {
        cin>>v[i];
        
    }
    rep(i,0,n)
    {
        if (p == 1 && v[i] == 1)
        {
            count += 5;
        }
        else if (v[i] == 1)
        {
            count += 1;
        }
        if (p == 0 && v[i] == 0 && i > 0)
        {
            count = -1;
            break;
        }
        p=v[i];
    }
    cout<<count<<'\n';

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