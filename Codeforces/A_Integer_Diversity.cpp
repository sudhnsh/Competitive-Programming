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
    vector<ll> a(n);
    rep(i,0,n)
    {
        cin>>a[i];
    }
    map<ll,ll> mp;
    ll z=0;
    rep(i,0,n)
    {
        if(a[i]!=0)
        mp[abs(a[i])]++;
        else
        {
            z=1;
        }
        
    }
    ll count=0;
    for(auto x:mp)
    {
        if(x.second>=2)
        {
            count+=2;
        }
        else if(x.second==1)
        {
            count++;
        }
    }
    cout<<count+z<<'\n';
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