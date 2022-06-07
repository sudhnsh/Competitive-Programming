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
    ll n,k;
    cin>>n>>k;
    vec v(n);
    ll ans=0;
    rep(i,0,n)
    {
        cin>>v[i];
        ans+=(v[i]/k);
        v[i]%=k;
    } 
    sort(v.begin(),v.end());
    ll j=n-1;
    rep(i,0,n)
    {
        if(j<=i)
        break;
        if(v[i]+v[j]>=k)
        {
            ans++;
            j--;
        }
        
    }
    cout<<ans<<'\n';
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