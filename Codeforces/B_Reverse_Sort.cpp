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
    string s;
    cin>>s;
    string s1=s;
    vector<ll> v;
    sort(s.begin(),s.end());
    rep(i,0,n)
    {
        if(s[i]!=s1[i])
        {
            v.push_back(i+1);
        }
    }
    if(v.size()!=0)
    cout<<1<<'\n';
    cout<<v.size()<<' ';
    rep(i,0,v.size())
    {
        cout<<v[i]<<' ';
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