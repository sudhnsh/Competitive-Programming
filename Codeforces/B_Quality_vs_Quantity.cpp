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
    sort(v.begin(),v.end());
    vector<ll> sum(n,0);
    sum[0]=v[0];
    rep(i,1,n)
    {
        sum[i]=sum[i-1]+v[i];
    }
    ll i=1,j=n-2;
    while(i<=j)
    {
        if(sum[i]<(sum[n-1]-sum[j]))
        {
            cout<<"YES\n";
            return;
        }
       // cout << i<<j<<'\n';
        i++;
        j--;
    }
    cout<<"NO\n";

    
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