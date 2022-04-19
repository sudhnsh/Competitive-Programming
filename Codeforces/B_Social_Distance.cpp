#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define mod 1000000007
//by sudhnsh
void solve()
{
    ll n,m;
    cin>>n>>m;
    vec v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n>m)
    {
        cout<<"NO"<<'\n';
        return;
    }
    ll count=0;
    count+=max(v[0],v[n-1]);
    rep(i,0,n-1)
    {
        count+=max(v[i],v[i+1]);
    }
    count+=n;
    if(count<=m)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO\n";
    }
    
    
}
int main()
{ ffst;
ll t;
cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}