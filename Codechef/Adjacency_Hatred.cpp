#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define m 1000000007
//by sudhnsh
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> o,e;
    ll ele;
    ll sum=0;
    rep(i,0,n)
    {
        cin>>ele;
        if(ele%2==0)
        {
            e.push_back(ele);
        }
        else
        {
            o.push_back(ele);
        }
    }
    if(o.size()==0||e.size()==0)
    {
        cout<<-1<<'\n';
    }
    else
    {
        rep(i,0,o.size())
        {
            cout<<o[i]<<' ';
        }
        rep(i,0,e.size())
        {
            cout<<e[i]<<' ';
        }
        cout<<'\n';
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