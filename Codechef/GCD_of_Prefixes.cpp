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
    ll n;
    cin>>n;
    vector<ll> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
    rep(i,0,n-1)
    {
        if(v[i]<v[i+1])
        {
            cout<<-1<<'\n';
            return;
        }
    }
    vector<ll> ans;
    ans.push_back(v[0]);
    rep(i,1,n)
    {
        if(v[i-1]%v[i]==0)
        {
            ans.push_back(v[i]);
        }
        else
        {
            cout<<-1<<'\n';
            return;
        }
    }
    rep(i,0,n)
    {
        cout<<ans[i]<<' ';
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