#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define int_max LLONG_MAX
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    ll n=s.size();
    if(n<2)
    {
        cout<<"NO\n";
        return;
    }
    vec countb(n,0),counta(n,0);
    if(s[0]=='B')
    {
        countb[0]++;
    }
    else
        counta[0]++;
    rep(i,1,n)
    {
        if(s[i]=='B')
        {
            countb[i]=countb[i-1]+1;
            counta[i]=counta[i-1];
        }
        else
        {
        counta[i]=counta[i-1]+1;
        countb[i]=countb[i-1];
        }

    }
    rep(i,0,n)
    {
       // cout<<countb[i]<<' '<<counta[i]<<' ';
        if(countb[i]>counta[i])
        {
            cout<<"NO\n";
            return;
        }
    }
    if(s[n-1]!='B')
    cout<<"NO\n";
    else
    cout<<"YES\n";
}
int main()
{
ffst;
ll t;
cin>>t;
while(t--)
{
solve();
}
return 0;
}