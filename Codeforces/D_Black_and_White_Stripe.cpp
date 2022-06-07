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
    string s;
    cin>>s;
    ll bb=0,ww=0;
    vec bl(n+1,0),wh(n+1,0);
    rep(i,1,n+1)
    {
        if(s[i-1]=='B')
        {
            bb++;
        }
        else
        {
            ww++;
        }
        bl[i]=bb;
        wh[i]=ww;
    }
    ll ans=int_max;
    rep(i,0,n+1-k)
    {
        ans=min(wh[i+k]-wh[i],ans);
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