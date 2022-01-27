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
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll> > v;
    rep(i,0,n/2)
    {
        v.push_back(make_pair(i,(n-i-1)));
    }
    if(k<n-1)
    {
    rep(i,0,v.size())
    {
        if(v[i].first==0)
        {
            v[i].first=k;
        }
        else if(v[i].second==k)
        {
            v[i].second=0;
        }
        else if(v[i].first==k)
        {
            v[i].first=0;
        }
    }
   // cout<<v.size()<<' ';
    rep(i,0,v.size())
    {
            cout<<v[i].first<<' '<<v[i].second<<'\n';
        
    }
    }
    else if(k==n-1&&n!=4)
    {
        rep(i,0,v.size()){

        if(v[i].second==n-2)
        {
            v[i].second=3;
        }
        if(v[i].first==0)
        {
            v[i].first=n-2;
        }
        if(v[i].first==3)
        {
            v[i].first=0;
        }
        }
    //    cout<<v.size()<<' ';
        rep(i,0,v.size())
        {
            cout<<v[i].first<<' '<<v[i].second<<'\n';
        }
    }
    else
    {
        cout<<-1<<'\n';
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