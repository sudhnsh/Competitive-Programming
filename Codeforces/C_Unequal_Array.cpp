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
    ll mn=n,mx=0;
    rep(i,0,n-1)
    {
        if(v[i]==v[i+1])
        {
            mx=max(mx,i+1);
            mn=min(mn,i);
        }
    }
    if(mn>mx)
    {
        cout<<0<<'\n';
        return;
    }
    ll se=(mx-mn)+1;
    if(se<=3)
    {
        cout<<se-2<<'\n';
    }
    else
    {
        cout<<se-3<<'\n';
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