#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define m 1000000007
//by sudhnsh
void solve()
{
   ll n;
   cin>>n;
    vector<ll> v(n);
    ll sum=0;
    cout<<fixed<<setprecision(6);
    rep(i,0,n)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    cout<<((double)(v[n-1])+(double)((double)(sum-v[n-1])/(n-1)))<<'\n';
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