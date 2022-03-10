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
    ll v[n];
    vector<ll> v1,v2;
    rep(i,0,n)
    {
        cin>>v[i];
        v[i]=abs(v[i]);
    }
    ll sum1=0,sum2=0;
    rep(i,0,n)
    {
        if(i%2==0)
        {
            v1.push_back(v[i]);
            sum1+=v[i];
        }
        else
        {
            v2.push_back(v[i]);
            sum2+=v[i];
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v2[v2.size()-1]>v1[0])
    {
        sum1-=v1[0];
        sum2-=v2[v2.size()-1];
        sum1+=v2[v2.size()-1];
        sum2+=v1[0];
    }
    ll ans=sum1-sum2;
    cout<<ans<<'\n';
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