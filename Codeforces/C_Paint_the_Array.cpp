#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i, n, a) for (ll i = a; i > n; i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define m 1000000007
// by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    ll o,e;
    ll v[n];
   rep(i,0,n)
   {
       cin>>v[i];
   }
   o=v[0];
   e=v[1];
   rep(i,0,n)
   {
       if (i % 2 == 0)
       {
           o = __gcd(o, v[i]);
       }
       else
       {
           e = __gcd(e, v[i]);
       }
   }
   bool b=true,c=true;
   rep(i,0,n)
   {
       if(i%2==0)
       {
           if(v[i]%e==0)
           {
               b=false;
           }
       }
   }
   if(b)
   {
       cout<<e<<'\n';
       return;
   }
   rep(i, 0, n)
   {
       if (i % 2 != 0)
       {
           if (v[i] % o == 0)
           {
               c = false;
           }
       }
   }
   if (c)
   {
       cout << o << '\n';
       return;
   }
   cout<<0<<'\n';
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