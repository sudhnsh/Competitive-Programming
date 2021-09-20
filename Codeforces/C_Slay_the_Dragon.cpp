#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mo 1000000007
//by sudhnsh
void solve()
{   
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    rep(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
    }
    vector<ll> g(n);
    sort(a.begin(),a.end());
    rep(i,0,n)
    {
        g[i]=sum-a[i];
    }
    ll m;
    cin>>m;
    rep(i,0,m)
    {
        ll x,y;
        cin>>x>>y;
        ll xl=(lower_bound(a.begin(),a.end(),x)-a.begin());
        ll xu=(upper_bound(a.begin(),a.end(),x)-a.begin());
        if(xu==n)
        {
            xu=n-1;
        }
        if(xl==n)
        {
            xl=n-1;
        }
        ll xf3=a[xl],yf3=g[xl];
        if(xl!=0)
        {
            xl--;
        }
        ll xf1=a[xl],xf2=a[xu];
        ll yf1=g[xl],yf2=g[xu];
       // cout<<xf1<<' '<<xf2<<' '<<yf1<<' '<<yf2<<' '<<xf3<<' '<<yf3<<'\n';
        ll coin1=max((ll)0,(x-xf1))+max((ll)0,(y-yf1));
        ll coin2=max((ll)0,(x-xf2))+max((ll)0,(y-yf2));
        ll coin3=max((ll)0,(x-xf3))+max((ll)0,(y-yf3));
        cout<<min(coin1,min(coin2,coin3))<<'\n';
        
    }
    
}
int main()
{ ffst;
ll t=1;
//cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}