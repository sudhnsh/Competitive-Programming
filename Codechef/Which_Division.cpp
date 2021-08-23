#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
    ll n;
   cin>>n;
   cout<<((n<1600)?3:(n<2000)?2:1)<<'\n';
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