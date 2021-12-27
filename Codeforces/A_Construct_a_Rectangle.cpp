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
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==(b+c))
    {
        cout<<"YES\n";
        return;
    }
    else if(b==c&&a%2==0)
    {
        cout<<"YES\n";
        return;
    }
    swap(a,b);
    if (a == (b + c))
    {
        cout << "YES\n";
        return;
    }
    else if (b == c && a % 2 == 0)
    {
        cout << "YES\n";
        return;
    }
    swap(a,c);
    if (a == (b + c))
    {
        cout << "YES\n";
        return;
    }
    else if (b == c && a % 2 == 0)
    {
        cout << "YES\n";
        return;
    }
    cout<<"NO\n";
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