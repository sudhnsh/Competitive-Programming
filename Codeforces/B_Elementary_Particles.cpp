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
   vector<ll> v(n);
   rep(i,0,n)
   {
       cin>>v[i];
   }
    map<ll,ll> mp;
    vector<ll> t;
    rep(i,0,n)
    {
        if(mp[v[i]]!=0)
        {
            t.push_back(mp[v[i]]+n-i-1);
          //  cout << (mp[v[i]] + n - i - 1) << ' ';
            mp[v[i]]=i+1;
        }
        else
        {
            mp[v[i]]=i+1;
        }
    }
    sort(t.begin(),t.end());
    if(t.size()==0)
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<t[t.size()-1]<<'\n';
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