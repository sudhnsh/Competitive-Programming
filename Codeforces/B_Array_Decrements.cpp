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
    ll n;
    cin>>n;
    ll diff=0;
    vec a(n),b(n);
    rep(i,0,n)
    {
        cin>>b[i];
    }
    rep(i,0,n)
    {
        cin>>a[i];
    }   
    rep(i,0,n)
    {
        diff=max(diff,b[i]-a[i]);
    }
    rep(i,0,n)
    {
        if(b[i]-a[i]<diff&&a[i]==0)
        continue;
        if(b[i]-a[i]!=diff)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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