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
   map<ll,ll> mp;
   rep(i,0,n)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<ll> v1=v;
    sort(v1.begin(),v1.end());
    if(v[0]!=v1[n-1])
    {
        cout<<-1<<'\n';
        return;
    }
    ll count=0;
    ll mx=-1;
    for(int i=n-1;i>=1;i--)
    {
        if(v[i]>mx)
        {
            mx=v[i];
            count++;
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