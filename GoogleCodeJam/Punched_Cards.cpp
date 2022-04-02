#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
// by sudhnsh
void solve()
{
    ll n, m;
    cin >> n >> m;
    rep(i, 0, (2 * n) + 1)
    {
        cout << '\n';
        rep(j, 0, (2 * m)+1)
        {
            if (i <= 1 && j <= 1)
            {
                cout << ".";
            }
            else if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    cout << "+";
                }
                else
                {
                    cout << "-";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "|";
                }
                else
                {
                    cout << ".";
                }
            }
        }   
    }
    
}
int main()
{  ffst;
    ll t;
    cin >> t;
    rep(i, 0, t)
    {
        cout << "Case #" << i + 1 << ": " ;
        solve();
        cout << '\n';
    }
    return 0;
}