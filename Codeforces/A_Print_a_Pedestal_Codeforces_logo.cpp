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
    ll n;
    cin>>n;
    ll a=3,b=2,c=1;
    n-=6;
    a+=(n/3);
    b+=(n/3);
    c+=(n/3);
    if(n%3==1)
    {
        a+=1;
    }
    else if(n%3==2)
    {
        a+=1;
        b+=1;
    }
    cout<<b<<' '<<a<<' '<<c<<'\n';

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