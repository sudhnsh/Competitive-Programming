#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(((a+b)%2)!=0)
    {
        cout<<-1<<'\n';
    }
    else if(a==0&&b==0)
    {
        cout<<0<<'\n';
    }
    else if(a==b)
    {
        cout<<1<<'\n';
    }
    else 
    {
        cout<<2<<'\n';
    }
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