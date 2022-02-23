#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
// by sudhnsh
void solve()
{
    float n,x,y;
    cin>>n>>x>>y;
    int ans=INT_MAX;
    rep(i,0,int(ceil(n/100))+1)
    {
        int j;
        if(n>i*100)
         j=int(ceil((n-(i*100))/4));
        else
         j=0;
        ans=min(ans,int(i*x+j*y));
       // cout<<i<<' '<<j<<'\n';
        
    }
    cout<<ans<<'\n';
}
int main()
{
    // ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}