#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define ffst                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vpair vector<pair<ll, ll>>
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    if(abs(a-b)>1||(a+b>(n-2))||a>((n-1)/2)||b>((n-1)/2))
    {
        cout<<-1<<'\n';
        return;
    }
    vector<ll> v(n,0);
    ll mx=n,mn=1;
    if(a>b)
    {
        ll i = 1;
        while (b > 0)
        {
            v[i] = mx;
            mx--;
            a--;
            v[i + 1] = mn;
            mn++;
            b--;
            i += 2;
        }
        v[i]=mx;
        mx--;
        rep(i, 0, n)
        {
            if (v[i] == 0)
            {
                v[i] = mx;
                mx--;
            }
        }
    }
    if (a < b)
    {
        ll i = 1;
        while (a > 0)
        {
            v[i] = mn;
            mn++;
            b--;
            v[i + 1] = mx;
            mx--;
            a--;
            i += 2;
        }
        v[i] = mn;
        mn++;
        rep(i, 0, n)
        {
            if (v[i] == 0)
            {
                v[i] = mn;
                mn++;
            }
        }
    }
    if (a == b)
    {
        ll i=1;
        while(a>0){
            v[i] = mn;
            mn++;
            b--;
            v[i + 1] = mx;
            mx--;
            a--;
            i+=2;
        }
        rep(i, 0, n)
        {
            if (v[i] == 0)
            {
                v[i] = mx;
                mx--;
            }
        }
    }
    
    rep(i,0,n)
    {
        cout<<v[i]<<' ';
    }
    cout<<'\n';
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