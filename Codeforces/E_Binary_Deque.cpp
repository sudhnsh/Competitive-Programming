#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define int_max LLONG_MAX
#define mod 1000000007
void solve()
{
    ll n,s;
    cin>>n>>s;
    vec v(n);
    ll ones=0;
    rep(i,0,n)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            ones++;
        }
    } 
    if(s>ones)
    {
        cout<<-1<<'\n';
        return;
    }
    ll ans=ones-s;
    vec pr;
    pr.push_back(0);
    rep(i,0,n)
    {
        if(v[i]==1)
        {
            pr.push_back(i+1);
        }
    }
    vec po;
    po.push_back(0);
    for(ll i=n-1;i>=0;i--)
    {
        if(v[i]==1)
        {
            po.push_back(n-i);
        }
    }
    ll sum=n;
    rep(i,0,ans+1)
    {
        sum=min(sum,pr[i]+po[ans-i]);
    }
    cout<<sum<<'\n';
}
int main()
{
ffst;
ll t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}