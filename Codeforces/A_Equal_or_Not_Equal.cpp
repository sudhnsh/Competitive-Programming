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
    string s;
    cin>>s;
    ll e=0;
    rep(i,0,s.size())
    {
        if(s[i]=='E')
        e++;
    }
    if(e==(s.size()-1))
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
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