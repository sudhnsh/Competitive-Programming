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
    ll n,m;
    cin>>n>>m;
    vector<string> s;
    string s1;
    rep(i,0,n)
    {
        cin>>s1;
        s.push_back(s1);
    }
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(s[i][j]=='0')
            {
                if(i-1>=0&&j-1>=0)
                {
                   // cout<<i<<' '<<j<<'\n';
                    if(s[i-1][j-1]=='1'&&s[i-1][j]=='1'&&s[i][j-1]=='1')
                    {
                        cout<<"NO\n";
                        return;
                    }
                }
                if(i-1>=0&&j+1<=m-1)
                {
                    if (s[i - 1][j + 1] == '1' && s[i - 1][j] == '1' && s[i][j + 1] == '1')
                    {
                        cout << "NO\n";
                        return;
                    }
                }
                if(i+1<=n-1&&j+1<=m-1)
                {
                    if (s[i + 1][j + 1] == '1' && s[i + 1][j] == '1' && s[i][j + 1] == '1')
                    {
                        cout << "NO\n";
                        return;
                    }
                }
                if(i+1<=n-1&&j-1>=0)
                {
                    if (s[i + 1][j - 1] == '1' && s[i + 1][j] == '1' && s[i][j - 1] == '1')
                    {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }
    cout<<"YES\n";
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