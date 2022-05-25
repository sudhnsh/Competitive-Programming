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
    ll n;
    cin>>n;
    vector<ll> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    ll i=0,j=n-1;
    ll count=0;
    ll cc=min(v[i],v[j]);
    while(i<=j)
    {
        if(v[i]<v[j])
        {
            
            if(cc<=v[i])
            {
                count++;
                cc=v[i];
            }
            i++;
        }
        else
        {
            
            if(cc<=v[j])
            {
                count++;
                cc=v[j];
            }
            j--;
        }
    }
    cout<<count;
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    rep(i, 0, t)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
        cout << '\n';
    }
    return 0;
}