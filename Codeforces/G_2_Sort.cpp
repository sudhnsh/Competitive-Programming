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
    rep(i,0,n)
    {
        cin>>v[i];
    }
    vec v1;
    ll count=0;
    rep(i,1,n)
    {
        if(2*v[i]>(v[i-1]))
        {
            count++;
        }
        else
        {

            v1.push_back(count);
            count=0;
        }
    }
    if(count)
    v1.push_back(count);
    count=0;
    rep(i,0,v1.size())
    {
        if(v1[i]>=k)
        {
            count+=v1[i]-k+1;
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