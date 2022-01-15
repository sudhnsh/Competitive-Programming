#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
// by sudhnsh
void solve()
{
   ll n,m,r,c;
   cin>>n>>m>>r>>c;
   bool b=false;
   vector<vector<char>> v(n, vector<char> (m) );
    rep(i, 0, n)
   {
       rep(j,0,m)
       {
           cin>>v[i][j];
           if(v[i][j]=='B')
           {
               b=true;
           }
       }
   }
   if(v[r-1][c-1]=='B')
   {
       cout<<0<<'\n';
       return;
   }
   rep(i,0,n)
   {
       if(v[i][c-1]=='B')
       {
           cout<<1<<'\n';
           return;
       }
   }
   rep(j,0,m)
   {
       if(v[r-1][j]=='B')
       {
           cout<<1<<'\n';
           return;
       }
   }
   if(b)
   {
       cout<<2<<'\n';
   }
   else
   {
       cout<<-1<<'\n';
   }
   

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