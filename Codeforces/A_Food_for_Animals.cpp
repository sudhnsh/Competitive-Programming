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
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    x=x-a;
    y=y-b;
    if(y<=0)
    {
        y=0;
    }
    if(x<=0)
    {
        x=0;
    }
    //cout<<x<<y<<'\n';
    if((x+y)<=c)
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