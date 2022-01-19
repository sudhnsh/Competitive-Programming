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
    ll temp=n;
    vector<ll> v;
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
           v.push_back(i);
           n = n / i;
        }
    }
    if (n > 2)
        v.push_back(n);
    map<ll,ll> mp;
    rep(i,0,v.size())
    {
        mp[v[i]]++;
    }
    ll mx=0;
    ll answer;
    for(auto x:mp)
    {
        if(x.second>mx)
        {
            answer=x.first;
            mx=x.second;
        }
    }
    cout<<answer<<'\n';
    
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