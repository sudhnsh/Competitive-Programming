#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i, n, a) for (ll i = a; i > n; i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define mod 1000000007
// by sudhnsh
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s;
    string s1;
    rep(i, 0, n)
    {
        cin >> s1;
        s.push_back(s1);
    }
    ll count=0;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(s[i][j]=='1')
            {
                count++;
            }
        }
    }
    
    if(s[0][0]=='1')
    {
        cout<<-1<<'\n';
        return;
    }
    cout<<count<<'\n';
    for(ll i=n-1;i>=0;i--)
    {
        for(ll j=m-1;j>=0;j--)
        {
            if(s[i][j]=='1')
            {
                if(j-1>=0)
                {
                    cout<<i+1<<' '<<j<<' '<<i+1<<' '<<j+1<<'\n';
                }
                else 
                {
                    cout<<i<<' '<<j+1<<' '<<i+1<<' '<<j+1<<'\n';
                }
            }
        }
    }
}
int main()
{
    ffst;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}