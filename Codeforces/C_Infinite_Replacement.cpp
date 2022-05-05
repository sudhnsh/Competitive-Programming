#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define vec vector<ll>
#define int_max LLONG_MAX
#define mod 1000000007
ll power(ll n,ll m)
{
    ll temp=1;
    rep(i,0,m)
    {
        temp*=n;
    }
    return temp;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    ll n=s1.length(),m=s2.length();
    bool b=false;
    rep(i,0,m)
    {
        if(s2[i]=='a')
        {
            b=true;
            break;
        }
    }
    if(m==1&&b)
    {
        cout<<1<<'\n';
        return;
    }
    else if(m>=1&&b)
    {
        cout<<-1<<'\n';
        return;
    }
    else
    {
        cout<<(ll)pow(2,n)<<'\n';
    }
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