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
    string s;
    cin>>s;
    ll count=0;
    rep(i,0,n)
    {
        if(i+1<n&&s[i]==s[i+1])
        {
            count++;
            i++;
        }
        else
        {
            count++;
        }
        
    }
    cout<<count<<'\n';
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