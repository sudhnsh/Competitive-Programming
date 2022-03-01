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
    ll d;
    cin>>d;
    if(d%2==0)
    {
        cout<<0<<' '<<d/2<<'\n';
        cout<<d/2<<' '<<0<<'\n';
        cout<<-d/2<<' '<<0<<'\n';
        cout<<0<<' '<<-d/2<<'\n';
    }
    else
    {
        cout<<-1<<'\n';
    }
    
}
int main()
{
    ffst;
    ll t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}