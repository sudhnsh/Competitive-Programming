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
    ll count=0;
    for(ll i=n-2;i>=0;i--)
    {
        if(v[i]==0)
        {
            break;
        }
        while(v[i]>=v[i+1])
        {
            v[i]/=2;
            count++;
            if(v[i]==0)
            break;
        }
    }
    rep(i,0,n-1)  
    {
        if(v[i]<v[i+1])
        {
            continue;
        }
        else
        {
            cout<<-1<<'\n';
            return;
        }
    }
    rep(i,1,n)
    {
        if(v[i]>v[i-1])
        {
            continue;
        }
        else
        {
            cout<<-1<<'\n';
            return;
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