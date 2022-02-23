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
    vector<ll> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    vector<ll> v1=v;
    sort(v1.begin(),v1.end());
    ll pos=n-1;
    rep(i,0,n)
    {
        if(v1[i]!=v[i])
        {
            pos=i;
            break;
        }
    }
    ll rev=-1;
    rep(i,0,n)
    {
        if(v[i]==v1[pos])
        {
            rev=i;
            break;
        }
    }
  //  cout<<pos<<' '<<rev<<' ';
    if(rev!=-1)
    reverse(v.begin()+pos,v.begin()+rev+1);
    rep(i,0,n)
    {
        cout<<v[i]<<' ';
    }
    cout<<'\n';
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