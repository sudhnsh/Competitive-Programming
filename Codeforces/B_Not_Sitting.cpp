#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
// by sudhnsh
int max(ll a,ll b)
{
    return a>b?a:b;
}
int mindis(ll i,ll j,ll m,ll n)
{
    int ans = 0;
    ans = max(ans, abs(i - 1) + abs(j - 1));
    ans = max(ans, abs(i - 1) + abs(j - m));
    ans = max(ans, abs(i - n) + abs(j - 1));
    ans = max(ans, abs(i - n) + abs(j - m));
    return ans;
}
void solve()
{
   ll n,m;
   cin>>n>>m;
   ll sum=n*m;
   vector<ll> v;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            v.push_back(mindis(i+1,j+1,m,n));
        }
    }
    sort(v.begin(),v.end());
    rep(i,0,m*n)
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