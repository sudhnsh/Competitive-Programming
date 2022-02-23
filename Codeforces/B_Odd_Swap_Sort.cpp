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
    ll ele;
    vector<ll> v,v1;
    rep(i,0,n)
    {
        cin>>ele;
        if(ele%2==0)
        {
            v.push_back(ele);
        }
        else
        {
            v1.push_back(ele);
        }
    }
    if(is_sorted(v.begin(),v.end())&&is_sorted(v1.begin(),v1.end()))
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
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