#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define m 1000000007
//by sudhnsh
void solve()
{
    ll x,y;
    cin>>x>>y;
    if((x+y)%2!=0)
    {
        cout<<-1<<' '<<-1<<'\n';
        return;
    }
    if(x%2==0)
    {
        cout<<x/2<<' '<<y/2<<'\n';
    }
    else
    {
        if(x>y)
        cout<<(x+y)/2<<' '<<0<<'\n';
        else
        cout<<0<<' '<<(x+y)/2<<'\n';
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