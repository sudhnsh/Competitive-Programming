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
    ll n, l;
    cin >> n >> l;
    vector<ll> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    vector<vector<ll>> v1;
    
    vector<ll> ans;
    rep(j, 0, n)
    {
        ll n1 = v[j];
        vector<ll> binaryNum(l);
        int i = 0;
        while (n1 > 0)
        {
            binaryNum[i] = n1 % 2;
            n1 = n1 / 2;
            i++;
        }
        v1.push_back(binaryNum);
        binaryNum.clear();
    }
    rep(i, 0, l)
    {
        ll z = 0, o = 0;
        rep(j, 0, n)
        {
            if (v1[j][i] == 0)
                z++;
            else
                o++;
        }
        if (z > o)
        {
            ans.push_back(0);
        }
        else
            ans.push_back(1);
    }
    ll b=1;
    ll answer=0;
    rep(i, 0, l)
    {
        answer+=(ans[i]*b);
        b*=2;
      //  cout << ans[i] << ' ';
    }
    cout<<answer << '\n';
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