#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n,r,b;
    cin>>n>>r>>b;
    ll num=r/(b+1);
    ll rem=r%(b+1);
   // cout<<rem<<' '<<num<<' ';
    rep(i,0,b+1)
    {
        if(i+1<=rem)
        {
            cout<<"R";
        }
        rep(j,0,num)
        {
            cout<<"R";
        }
        if(i<b)
        cout<<"B";
    }
    cout<<'\n';
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