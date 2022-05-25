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
   ll n,m,l;
   cin>>n>>m>>l;
   ll li=n+l-1;
   if(n==0)
   {
       cout<<m<<'\n';
       return;
   }
   ll ans=(m%li);
   if(ans>=l&&ans<=li)
   {
       cout<<0<<'\n';
   }
   else
   {
       cout<<ans<<'\n';
   }
   
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