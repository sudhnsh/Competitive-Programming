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
    ll countz=s.size(),count1=1;
    rep(i,0,s.size())
    {
        if(s[i]=='0')
        {
            countz=i+1;
            break;
        }
    }     
    rep(i,0,s.size())
    {
        if(s[i]=='1')
        {
            count1=i+1;
            
        }
    }
    cout<<countz-count1+1<<'\n';
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