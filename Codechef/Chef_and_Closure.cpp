#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> m;
    rep(i,0,n)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    sort(v.begin(),v.end());
    if(n>=2){    
    if(m[v[n-1]*v[n-2]]==0||m[v[0]*v[1]]==0)
    {
        cout<<0<<'\n';
    }
    else
    cout<<1<<'\n';
    }
    if(n==1)
    {
        cout<<1<<'\n';
    }

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