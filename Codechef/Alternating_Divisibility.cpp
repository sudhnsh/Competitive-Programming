#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
// by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    vector<bool> v1((2*n)+1,0);
    ll j=1;
    for(ll i=0;i<n;i+=2)
    {
        v[i]=j;
        v1[j] = 1;
        j++;
        
    }
    for(ll i=n-1;i>=0;i--)
    {
        j=2;
        if(v[i]==0)
        {
            //cout<<j<<' ';
            while(v1[v[i-1]*j]!=0)
            {
                
                j++;
            }
            v1[v[i - 1] * j] = 1;
            // cout<<j<<' ';
            v[i]=v[i-1]*j;
        }
    }
    rep(i,0,n)
    {
        cout<<v[i]<<' ';
    }
    cout<<'\n';
}
int main()
{
    ffst;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}