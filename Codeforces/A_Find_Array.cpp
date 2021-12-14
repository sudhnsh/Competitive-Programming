#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i,n,a)  for(ll i=a;i>n;i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define m 1000000007
//by sudhnsh
void solve()
{
   ll n;
   cin>>n;
   rep(i,0,n)
   {
       cout<<(2*(i+1))+1<<' ';
   }
   cout<<'\n';
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