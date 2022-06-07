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
    vec v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    ll mx=v[0];
    ll count=0;
    rep(i,1,n)
    {
        if(v[i]>mx)
        {
            mx=v[i];
        }
        else if(v[i]<mx)
        {
            count++;
            if(i+1<n)
            {
                mx=v[i+1];
            }
        }
    }
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