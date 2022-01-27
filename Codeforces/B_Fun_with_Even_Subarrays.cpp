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
    ll n;
    cin>>n;
    vector<ll> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    ll count=0;
    rep(i,0,n-1)
    {
        if(v[i]==v[n-1])
        {
          count++;  
        }
        else
        {
            break;
        }
    }
    ll ans=0;
    ll pc=1;
    while(pc+count<n){
    if(n-count==1)
    {
            break;
    }
    for(int i=n-1-pc;i>=count;i--)
    {
        if(v[i]==v[n-1])
        {
            pc++;
        }
        else
        {
            break;
        }
    }
    pc*=2;
    ans++;
    }
    cout<<ans<<'\n';
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}