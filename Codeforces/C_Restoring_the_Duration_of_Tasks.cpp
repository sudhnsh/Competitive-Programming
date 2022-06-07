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
    vec a(n),b(n),ans(n);
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
        if(i==0)
        cout<<a[i]-b[i]<<' ';
        else  
        cout<<a[i]-max(b[i],a[i-1])<<' ';
    }
    cout<<'\n';
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