#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define m 1000000007
// by sudhnsh
ll countSetBits(ll n)
{
    ll count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v;
    ll i=1;
    while(v.size()!=n)
    {
        if(countSetBits(i)%2==0)
        {
            v.push_back(i);
            i++;
        }
        else
        {
            i++;
        }
        
    }
    ll sum=0;
    rep(i,0,n)
    {
        sum^=v[i];
        cout<<v[i]<<' ';
    }
    cout<<endl;
    //cout << countSetBits(sum) << '\n';
}
int main()
{
    // ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}