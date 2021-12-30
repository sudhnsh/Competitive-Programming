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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string s1="";
    s1+=s[0];
    rep(i,1,n)
    {
        if((s[i]-'a')<(s[i-1]-'a'))
        {
            s1+=s[i];
        }
        else if (i > 1 && (s[i] - 'a') <= (s[i - 1] - 'a'))
        s1 += s[i];
        else
        {
            break;
        }
    }
   // cout<<s1<<' ';
    cout<<s1;
    reverse(s1.begin(),s1.end());
    cout<<s1<<'\n';

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