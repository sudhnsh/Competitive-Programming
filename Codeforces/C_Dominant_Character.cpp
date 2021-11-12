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
    vector<ll> a,b,c;
    ll ca=0,cb=0,cc=0;
    cin>>s;
    ll ans=8;
    rep(i,0,n)
    {
        if(i+1<n){
        string s1=s.substr(i,2);
        if(s1=="aa")
        {
            ans=min(ans,(ll)2);
        }
        }
        if(i+2<n){
        string s1=s.substr(i,3);
        if(s1=="aba"||s1=="aca")
        {
            ans=min(ans,(ll)3);
        }
        }
        if(i+3<n){
        string s1=s.substr(i,4);
        if(s1=="abca"||s1=="acba")
        {
            ans=min(ans,(ll)4);
        }
        }
        if(i+6<n){
        string s1=s.substr(i,7);
        if(s1=="abbacca"||s1=="accabba")
        {
            ans=min(ans,(ll)7);
        }
        }
    }
    if(ans==8)
    {
        ans=-1;
    }
    cout<<ans<<'\n';

}
int main()
{ //ffst;
ll t;
cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}