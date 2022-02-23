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
   ll ele;
   vector<ll> v1,v2;
   rep(i,0,2*n)
   {
       cin>>ele;
       if(ele%2==0)
       v1.push_back(ele);
       else
       v2.push_back(ele);
   }
   if(v1.size()%2==0&&v2.size()%2==0)
   {
       cout<<"YES\n";
   }
   else
   {
       cout<<"NO"<<'\n';
   }
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