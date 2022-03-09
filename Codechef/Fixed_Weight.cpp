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
    ll n,x;
    cin>>n>>x;
    rep(i,1,n+1)
    {
        if(x%i==0)
        {
            
            if((x/i)<=(n-i+1))
            {
               //cout<<i<<' '<<x/i<<'\n';
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
    return;
    
}
int main()
{
    ffst;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}