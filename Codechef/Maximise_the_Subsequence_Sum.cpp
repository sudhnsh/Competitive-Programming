#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
   ll n,k;
   cin>>n>>k;
   vector<ll> v(n);
  rep(i,0,n)
  {
      cin>>v[i];
  }
  sort(v.begin(),v.end());

  rep(i,0,k)
  { 
      if(v[i]<0)
      v[i]=-1*(v[i]);
  }
  sort(v.begin(),v.end());
  ll sum=0;
  rep(i,0,n)
  {
      
      if(v[i]>0)
      {
          sum+=v[i];
      }
  }
  cout<<sum<<'\n';

}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}