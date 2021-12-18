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
    vector<string> v(n-2);
    string s="";
    vector<ll> t;
    rep(i,0,n-2)
    {
        cin>>v[i];
    }
    rep(i,0,n-2)
    {
        s += v[i];
        if (i > 0 && s[(i * 2)] == v[i - 1][1])
        {
            t.push_back((i * 2));
        }
    }
    if(t.size()>0){
    rrep(i, -1, t.size()-1)
    {
        s.erase(t[i],1);
    }
    }
    rep(i,s.size(),n)
    {
        s+="a";
    }
    cout<<s;
    cout<<'\n';
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