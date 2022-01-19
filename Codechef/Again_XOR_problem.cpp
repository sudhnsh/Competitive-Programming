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
   ll n,k,t;
   cin>>n>>k;
   string s,s1;
   cin>>s;
   ll cc=0;
   vector<ll> v;
   v.push_back(0);
   rep(i,0,n)
    {
        if(s[i]=='1')
        {
            cc++;
        }
        v.push_back(cc);
    }
    ll count=0;
    rep(i,0,k)
    {
        //cout << v[n - k + 1 + i] - v[i]<<' ';
        if ((v[n - k + 1 + i] - v[i]) % 2 != 0)
        {
            count++;
        }
    }
   cout<<count<<'\n';
  // cout<<sum<<'\n';
}
int main()
{
    // ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}