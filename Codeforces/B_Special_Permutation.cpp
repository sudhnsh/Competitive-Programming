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
    ll n,a,b;
    cin>>n>>a>>b;
    ll c=(n/2)-1;
    if((!((n-a)>=(c)&&(b)>(c)))||((a>n/2&&b>n/2)||(a<=n/2&&b<=n/2)))
    {
        cout<<-1<<'\n';
        return;
    }  
    vector<ll> v,v1; 
    if(a<b){
    v.push_back(a);
    v1.push_back(b);
    rep(i,0,n)
    {
        if(i+1<a)
        {
            v1.push_back(i+1);
        }
        else if(i+1>b)
        {
            v.push_back(i+1);
        }
    }
    rep(i,a+1,b)
    {
        if(v.size()!=n/2)
        {
            v.push_back(i);
        }
        else if(v1.size()!=n/2)
        {
            v1.push_back(i);
        }
    }
    rep(i,0,v.size())
    {
        cout<<v[i]<<' ';
    }
    rep(i,0,v1.size())
    {
        cout<<v1[i]<<' ';
    }
    }
    else
    {
    v.push_back(b);
    v1.push_back(a);
    rep(i,0,n)
    {
        if(i+1>a)
        {
            v1.push_back(i+1);
        }
        else if(i+1<b)
        {
            v.push_back(i+1);
        }
    }
    rep(i,b+1,a)
    {
        if(v.size()!=n/2)
        {
            v.push_back(i);
        }
        else if(v1.size()!=n/2)
        {
            v1.push_back(i);
        }
    }
    rep(i,0,v1.size())
    {
        cout<<v1[i]<<' ';
    }
    rep(i,0,v.size())
    {
        cout<<v[i]<<' ';
    }
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