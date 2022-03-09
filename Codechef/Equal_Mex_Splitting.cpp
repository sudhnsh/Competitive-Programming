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
    ll ele;
    vector<ll> v(n);
    map<ll,ll> mp;
    ll z=0,o=0;
    ll count=0;
    ll j=0;
    rep(i,0,n)
    {
        cin>>v[i];
        if(v[i]==0)
        {
            z++;
        }
        else
        {
            o++;
        }
        
    }
    cout<<max(o,z)<<'\n';
}
int main()
{
    ffst;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}