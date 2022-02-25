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
    pair<ll,ll> x[3];
    cin>>x[0].second>>x[0].first>>x[1].second>>x[1].first>>x[2].second>>x[2].first;
    sort(x,x+3);
    if(x[1].first==x[2].first&&x[1].first!=x[0].first)
    {
        cout<<abs(x[2].second-x[1].second)<<'\n';
    }
    else
    {
        cout<<0<<'\n'
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