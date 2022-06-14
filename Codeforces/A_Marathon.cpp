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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll count=0;
    if(b>a)
    count++;
    if(c>a)
    count++;
    if(d>a)
    count++;
    cout<<count<<'\n';
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