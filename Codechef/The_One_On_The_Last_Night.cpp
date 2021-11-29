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
    string s;
    cin>>s;
    ll k;
    cin>>k;
    vector<ll> v;
    sort(s.begin(),s.end());
    rep(i,0,s.size())
    {
        v.push_back(s[i]-'0');
    }
    while(k)
    {
        sort(v.begin(), v.end());
        if(v[0]==9)
        {
            break;
        }
        v[0]++;
        k--;
    }
    ll ans=1;
    rep(i,0,v.size())
    {
        ans*=v[i];
    }
    cout<<ans<<'\n';
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