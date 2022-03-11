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
    if(n==1||n==2)
    {
        cout<<n<<'\n';
        return;
    }
    if(n==3)
    {
        cout<<21<<'\n';
    }
    else if(n%3==0)
    {
           rep(i,0,n/3)
           {
               cout<<21;
           }
           cout<<'\n';
    }
    else if(n%3==1)
    {
        cout<<1;
        rep(i,0,n/3)
        {
            cout<<21;
        }
        cout<<'\n';
    }
    else
    {
        rep(i,0,n/3)
        {
            cout<<21;
        }
        cout<<2<<'\n';
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