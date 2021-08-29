#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
   ll n,k;
   cin>>n;
   vector<ll> v(n);
   set<ll> s;
   rep(i,0,n)
   {
       cin>>v[i];
        s.insert(v[i]-i+1);
   }
   cout<<n-s.size()+1<<'\n';

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