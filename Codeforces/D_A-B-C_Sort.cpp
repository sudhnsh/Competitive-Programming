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
    vec v(n),v1(n),v2(n,0),v3(n,0);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    v1=v;
    sort(v1.begin(),v1.end());
    if(n%2==0)
    {
        for(ll i=0;i<n;i+=2)
        {
            v2[i]=min(v[i],v[i+1]);
            v2[i+1]=max(v[i],v[i+1]);
        }
    }
    else
    {
        v2[0]=v[0];
        for(ll i=1;i<n;i+=2)
        {
            v2[i]=min(v[i],v[i+1]);
            v2[i+1]=max(v[i],v[i+1]);
        }
    }
    if(v1==v2)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
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