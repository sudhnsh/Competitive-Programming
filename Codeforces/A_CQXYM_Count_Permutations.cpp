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
    ll sum=1;
    rep(i,1,(2*n)+1)
    {
        if(i!=2)
        sum=(sum*(i))%m;
    }
    cout<<sum<<'\n';
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