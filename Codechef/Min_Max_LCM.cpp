#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define mod 1000000007
//by sudhnsh
void solve()
{
    ll m,n;
    cin>>m>>n;
    ll mx=m*n;
    ll mn=2*m;
    mx=(mx)*(mx-1);
    cout<<mn<<' '<<mx<<'\n';
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