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
    ll n,k;
    cin >> n >>k;
    vector<ll> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    vector<ll> v1,v2;
    sort(v.begin(),v.end());
    rep(i,0,n)
    {
        if(v[i]>0)
        {
            v2.push_back(v[i]);
        }
        else
        {
            v1.push_back(v[i]);
        }
    }
    vector<ll> t;
    reverse(v2.begin(),v2.end());
    for(ll i=0;i<v1.size();i+=k)
    {
        t.push_back(abs(v1[i]));
    }
    for(ll i=0;i<v2.size();i+=k)
    {
        t.push_back(v2[i]);
    }
    sort(t.begin(),t.end());
    ll c=0;
    rep(i,0,t.size())
    {
        c+=t[i];
    }
    c*=2;
    c-=t[t.size()-1];  
    cout<<c<<'\n';
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