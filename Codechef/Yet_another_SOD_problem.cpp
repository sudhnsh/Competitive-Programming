#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    ll l,r;
    cin>>l>>r;
    ll ans=(l%3==0)?(((r/3)-(l/3))+1):((r/3)-(l/3));
    cout<<ans<<'\n';
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