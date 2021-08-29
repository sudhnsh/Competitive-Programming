#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define fastt ios_base::sync_with_stdio(false); cin.tie(NULL);
// by sudhanshu

void solve()
{

   ll n,k;
   cin>>n;
   vector<ll> v(n),v1(n-1);
   vector<ll> d;
  rep(i,0,n)
  {
      cin>>v[i];
  }
  rep(i,0,n-1)
  {
      cin>>v1[i];
  }
  sort(v.begin(),v.end());
  sort(v1.begin(),v1.end());
  if(n<=2)
  {
      if(v1[0]-v[1]>0)
        cout<<v1[0]-v[1]<<'\n';
    else
        cout<<v1[0]-v[0]<<'\n';
      return;
  }
  ll ans=INT_MAX;
  if(v1[0]-v[0]==v1[n-2]-v[n-1])
  {
     // cout<<'m';
     if(v1[0]-v[0]>0)
      ans=min(ans,v1[0]-v[0]);
  }
  if(v1[0]-v[0]==v1[1]-v[1])
  {
      //cout<<'e';
       if(v1[0]-v[0]>0)
      ans=min(ans,v1[0]-v[0]);
  }
  if(v1[n-3]-v[n-2]==v1[n-2]-v[n-1])
  {
     // cout<<'s';
      if(v1[n-2]-v[n-1]>0)
     ans=min(ans,v1[n-2]-v[n-1]);
  }
    cout<<ans<<'\n';
}
int main() {
       fastt;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}