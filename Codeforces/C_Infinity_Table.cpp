#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
ll sqare(ll n)
{
    ll i=1;
    while((i*i)<n)
    {
        i++;
    }
    return i;
}
void solve()
{
    ll n;
    cin>>n;
    ll t1=sqare(n);
    ll t0=t1-1;
    ll x=(n-((t0)*(t0))-1)+1;
    ll y;
    if(x<=((t1*t1)-(t0*t0))/2)
    {
        y=t1;
    }
    else
    {
        x=t1;
        y=(t1*t1)-n+1;
    }
    cout<<x<<' '<<y<<'\n';
    
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}