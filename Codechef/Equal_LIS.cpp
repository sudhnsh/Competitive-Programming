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
    if(n>2)
    {
        if(n%2!=0)
        {
            cout << "YES\n";
            rep(i, 0, n)
            {
                cout << i + 1 << ' ';
                i++;
            }
            for (int i = n - 1; i > 0; i -= 2)
            {
                cout << i << ' ';
            }
            cout << '\n';
        }
        else
        {
            cout<<"YES\n";
            list<ll> l{2,1,4,3};
            rep(i,4,n)
            {
                if(i%2!=0)
                {
                    l.push_back(i+1);
                }
                else
                {
                    l.push_front(i+1);
                }
            }
            for(auto x:l)
            {
                cout<<x<<' ';
            }
            cout<<'\n';
        }
        
    }
    else
    {
        cout<<"NO\n";
    }
    
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