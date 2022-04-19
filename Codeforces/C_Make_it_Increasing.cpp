#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define INT_MAX LLONG_MAX
#define mod 1000000007
//by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    vec v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    ll count=INT_MAX;
    rep(i,0,n)
    {
        ll co=0;
        vec v1(n,0);
        for(ll j=i-1;j>=0;j--)
        {
            v1[j]-=(((abs(v1[j+1])/abs(v[j]))+1)*v[j]);
            co+=((abs(v1[j+1])/abs(v[j]))+1);
        }
        rep(j,i+1,n)
        {
            v1[j]+=(((abs(v1[j-1])/(v[j]))+1)*v[j]);
            co+=((abs(v1[j-1])/(v[j]))+1);
        }
        // cout<<co<<'\n';
        count=min(count,co);
        // rep(j,0,n)
        // {
        //     cout<<v1[j]<<' ';
        // }
        // cout<<'\n';
    }
    cout<<count<<'\n';
}
int main()
{ ffst;
ll t=1;
//cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}