#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
// by sudhanshu
vector<ll> c(1000);
void cc()
{
    ll j=1;
    rep(i,0,1000)
    {
        if(j%10==3)
        j++;
        if((j%3==0))
        {
            j++;
        }
        if(j%10==3)
        j++;
        c[i]=j;
        j++;
    }
}
void solve()
{
    ll n;
    cin>>n;
    cout<<c[n-1]<<'\n';
}
int main()
{
    cc();
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}