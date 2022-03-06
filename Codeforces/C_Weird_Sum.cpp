#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i, n, a) for (ll i = a; i > n; i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define mod 1000000007
// by sudhnsh
void solve()
{
    ll n,m;
    cin >> n>>m;
    vector<vector<pair<ll,ll>>> v(1e5+1);
    vector<vector<ll> > v1(1e5 + 1), v2(1e5 + 1);
    ll ele;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cin>>ele;
            v[ele].push_back(make_pair(i,j));
            v1[ele].push_back(i);
            v2[ele].push_back(j);
        }
    }
    ll sum=0;
    rep(i,0,1e5+1)
    {
        sort(v[i].begin(),v[i].end());
        sort(v1[i].begin(),v1[i].end());
        sort(v2[i].begin(),v2[i].end());
    }
    rep(i,0,1e5+1)
    {
        ll n=v[i].size();
        if(v[i].size()>0)
        for(ll j=v[i].size()-1;j>=0;j--)
        {
            sum+=((j*v1[i][j])-((n-1-j)*v1[i][j]));
            sum+=(((j*v2[i][j])) - (((n - 1 - j) * v2[i][j])));
          //  cout<<sum<<' ';
        }
    }
    cout<<sum<<'\n';


   
}
int main()
{
    ffst;
    ll t=1;
   // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}