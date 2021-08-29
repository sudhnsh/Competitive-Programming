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
   ll mx=-100001;
   rep(i,0,n)
   {
       cin>>v[i];
       mx=max(mx,v[i]);
   }
   ll count=0;
   rep(i,0,n)
   {
       if((v[i]==mx)&&(i+1>=k))
       {
           count+=n-i;
       }
   }
   cout<<count<<'\n';

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