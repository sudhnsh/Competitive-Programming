#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n,s;
    cin>>n>>s;
    ll a1=s,a2=0;
    if(a1<=n&&a2<=n)
    {
        cout<<abs(a1-a2)<<'\n';
        return;
    }
    else if(a1>n)
    {
        a1=n;
        a2=s-n;
        cout<<abs(a1-a2)<<'\n';
        return;
    }
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