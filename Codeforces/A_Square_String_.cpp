#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define rrep(i, n, a) for (ll i = a; i > n; i--)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define m 1000000007
// by sudhnsh
void solve()
{
    string s;
    cin >> s;
    if(s.size()%2==0)
    {
        string s1=s.substr(0,s.size()/2);
        string s2=s.substr(s.size()/2,s.size()/2);
        if(s1==s2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    else
    {
        cout<<"NO\n";
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