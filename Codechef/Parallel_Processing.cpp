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
    ll sum=0;
    vector<ll> v(n);
    ll ele;
    rep(i,0,n)
    {
        cin>>ele;
        sum+=ele;
        v[i]=sum;
    }
    sort(v.begin(),v.end());
    //cout<<sum<<ss<<'\n';
    ll res=sum;
    rep(i,0,n)
    {
        res = min(max(v[i], sum - v[i]), res);
    }
    cout << res << endl;
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