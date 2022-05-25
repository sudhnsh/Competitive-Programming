#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define mod 1000000007
//by sudhnsh
void solve()
{
        ll x,c,k;
        cin >> x >> c;
        k = x;
        ll fr = 0;
        ll ans = 1;
        vector<ll> fct;
        map<ll, ll> tm;
        rep(i,2,sqrt(k)+1)
        {
            fr = 0;
            if (k % i == 0)
            {
                while (k % i == 0)
                {
                    k /= i;
                    ++fr;
                }
                fct.push_back(i);
                tm[i] = fr;
            }
        }
        if (k != 1)
        {
            fct.push_back(k);
            tm[k] = 1;
        }
        
        for (auto f : fct)
        {
            while (true)
            {
                if (tm[f] >= c)
                {
                    tm[f] -= c;
                }
                else
                {
                    break;
                }
            }
            rep(j,0,tm[f])
            {
                ans *= f;
            }
        }
        cout << ans << '\n';
   
}
int main()
{ ffst;
ll t;
cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}